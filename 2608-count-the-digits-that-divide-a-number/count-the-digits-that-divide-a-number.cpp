class Solution {
public:
    int countDigits(int num) {
        int n2 = num;
        int count = 0;
        while (n2>0){
          int x1 = n2%10;
          n2 = n2/10;
          if(num%x1==0)count++;
        }
        return count;
        
    }
};