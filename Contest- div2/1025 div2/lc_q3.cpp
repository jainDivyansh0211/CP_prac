#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves(vector<string>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dis(n, vector<int>(m, 1e9));
        vector<vector<pair<int,int>>> mp(26);
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] >= 'A' && matrix[i][j] <= 'Z') {
                    mp[matrix[i][j]-'A'].push_back({i, j});
                }
            }
        }
        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        deque<pair<int,int>> dq;
        dis[0][0] = 0;
        dq.push_front({0, 0});
        vector<int> lvis(26,0);
        
        while(!dq.empty()) {
            auto [x, y] = dq.front();
            dq.pop_front();

            char cur = matrix[x][y];
            if(cur >= 'A' && cur <= 'Z') {
                if(!lvis[cur-'A']){
                for(auto [nx, ny] : mp[cur-'A']) {
                    if(nx == x && ny == y) continue;
                    
                    if(dis[nx][ny] > dis[x][y]) {
                        dis[nx][ny] = dis[x][y];
                        dq.push_front({nx, ny});
                    }
                }
                lvis[cur-'A']=1;
                }
            }

            for(int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                
                if(nx >= 0 && ny >= 0 && nx < n && ny < m && matrix[nx][ny] != '#') {
                    if(dis[nx][ny] > dis[x][y] + 1) {
                        dis[nx][ny] = dis[x][y] + 1;
                        dq.push_back({nx, ny});
                    }
                }
            }
        }
        
        if(dis[n-1][m-1]==1e9) return -1;
        else return dis[n-1][m-1];
    }
};