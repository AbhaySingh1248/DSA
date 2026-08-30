class Solution {
public:
    int addDigits(int num) {
        int n2 = num;
        int x = 0;
        while(n2>9){
            while(n2>0){
             x = x+ n2%10;
             n2=n2/10;
            }
             n2=x;
             x=0;

        }
        return n2;
        
    }
};