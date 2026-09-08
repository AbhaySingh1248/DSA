class Solution {
public:
    int mySqrt(int x) {
      double eps = 1e-6;
      double lo=1;
      double hi = x;
      while (hi-lo>eps){
        double mid = lo +(hi-lo)/2;
        if(mid*mid < x){
            lo = mid;
        }
        else hi = mid;

      }
        int z = int(hi);
        return z;
    }
};