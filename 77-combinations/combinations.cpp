class Solution {
    void sub(vector<vector<int>> &ans , int n, int i , int k, vector<int> &df){
        if(df.size()==k){
            ans.push_back(df);
            return;
        }

        if(i>n){
            return;
        }


        df.push_back(i);
        sub(ans,n,i+1,k,df);
        df.pop_back();
        sub(ans,n,i+1,k,df);
    }
public:
    vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> ans;
    vector<int> df;
    sub(ans,n,1,k,df);
    return ans;
        
    }
};