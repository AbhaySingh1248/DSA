class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxs ;
        int ans=0;
        for(int i=0;i<accounts.size();i++){
            maxs = 0;
            for(int j=0;j<accounts[i].size();j++){
                maxs +=accounts[i][j];
            }
              ans = max(maxs,ans);

             }
             return ans;
            }
        
        
    
};