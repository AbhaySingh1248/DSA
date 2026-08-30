class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int r=s.size()-1;
        while(l<r){
           if(!(s[l]>=97 && s[l]<=122  ||  s[l]>='0' && s[l]<='9' || s[l]>=65 && s[l]<=90)){l++;}


         else if(!(s[r]>=97 && s[r]<=122  ||  s[r]>='0' && s[r]<='9' || s[r]>=65 && s[r]<=90)){r--;}

         else {
                if (tolower(s[l]) != tolower(s[r])) {
                    return false;
                }
                l++;
                r--;
         

        }
        
 
    }
    return true;
    }
};