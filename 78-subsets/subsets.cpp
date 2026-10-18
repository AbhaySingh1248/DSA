class Solution {
    void sub( vector<vector<int>> &ans , vector<int> &nums , int n, int i, vector<int> &df){
        if(i==n){
            ans.push_back(df);
            return;  
    }
    df.push_back(nums[i]);
    sub(ans,nums,n,i+1,df);
    df.pop_back();
    sub(ans,nums,n,i+1,df);


    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
      int n = nums.size();
      vector<vector<int>>ans;
      vector<int>df;
      sub(ans,nums,n,0,df);
      return ans;
    }
};