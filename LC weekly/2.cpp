class Solution {
public:
    int sumDig(int n){
        int r=0;
        while(n!=0){
            r+=(n%10);
            n/=10;
        }
        return r;
    }
    int minSwaps(vector<int>& nums) {
        vector<int> a1,a2;
        for(int i=0;i<nums.size();i++){
            a1.push_back(i);
            a2.push_back(i);
        }
        sort(a1.begin(),a1.end(),[](int a,int b){
            int x=sumDig(nums[a]);
            int y=sumDig(nums[b]);
            if(x!=y) return x<y;
            else return nums[a]<nums[b];
        });
        
    }
};