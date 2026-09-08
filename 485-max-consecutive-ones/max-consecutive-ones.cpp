class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=0;
        int r = 0;
        int len=0;
        int maxlen=0;
        while(r<nums.size()){
            if(nums[r]==1){
                len = r-l+1;
                maxlen = max(len,maxlen);
            }
            else {
                l = r+1;
            }
            r++;
        }
        return maxlen;
    }
};