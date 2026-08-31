class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count0=0;
        int count1=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==0)count0++;
           else if(nums[i]<0)count1++;
        }
        if(count0>0) return 0;
        else if((count1)&1 !=0) return -1;
        else return 1;
    }
};