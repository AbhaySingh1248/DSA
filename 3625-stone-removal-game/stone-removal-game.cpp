class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10)return false;
        int t=10;
        while(n>0){
             n=n-t;
            t--;
            if(n<0)return false;
            n=n-t;
            t--;
            if(n<0)return true;
        }
        return false;
    }
};