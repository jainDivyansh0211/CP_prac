#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves(vector<string>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> dis(n,vector<int>(m,1e9));
        map <char,vector<pair<int,int>>> mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]>='A' && matrix[i][j]<='Z'){
                    mp[matrix[i][j]].push_back(make_pair(i,j));
                }
            }
        }
        int x=0;
        int y=0;
        int dx[]={1,-1,0,0};
        int dy[]={0,0,-1,1};
        deque <pair<int,int>> dq;
        dis[x][y]=0;
        dq.push_front(make_pair(x,y));
        while(!dq.empty()){
            pair<int,int> p = dq.front();
            dq.pop_front();
            x=p.first;
            y=p.second;
            if(dis[x][y]>dq.size() && dq.size()>1) continue;
            
            if(matrix[x][y]>='A' && matrix[x][y]<='Z'){
            for(auto t:mp[matrix[x][y]]){
                if(t.first==x && t.second==y) continue;
                if(dis[t.first][t.second]>dis[x][y]){
                    dis[t.first][t.second]=dis[x][y];
                    dq.push_front(t);
                }
            }
            }
            for(int i=0;i<4;i++){
                if(x+dx[i]>=0 && y+dy[i]>=0 && x+dx[i]<n && y+dy[i]<m && matrix[x+dx[i]][y+dy[i]]!='#'){
                    if(dis[x+dx[i]][y+dy[i]]>dis[x][y]+1){
                        dis[x+dx[i]][y+dy[i]]=dis[x][y]+1;
                        dq.push_back(make_pair(x+dx[i],y+dy[i]));
                    }
                }
            }
        }
        if(dis[n-1][m-1]==1e9){
            return -1;
        }
        else return dis[n-1][m-1];
    }
};