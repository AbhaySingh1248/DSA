class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        long long sum=0;
        long long sum2=0;
        for(int i=0;i<nums.size();i++){
         if(nums[i]<=9)sum = sum +nums[i];
         else sum2 +=nums[i];
        }

        if(sum==sum2)return false;
        else return true;
    }
};