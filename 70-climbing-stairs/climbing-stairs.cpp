class Solution {
public:
    int climbStairs(int n){
        int prev2 = 1;
        int prev1 = 2;
        int cur = 0;
        if(n<=2){
            return n;
        }
        for(int i=3;i<=n;i++){
            int cur = prev1+ prev2;
            prev2 = prev1;
            prev1 = cur;
        }
        return prev1;
    }
};