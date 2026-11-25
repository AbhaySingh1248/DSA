class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m = needle.size();
        vector<int>v(256,-1);
        for(int i=0;i<m;i++){
            v[needle[i]]=i;
        }

        int i=0;
        while(i<=n-m){
            if(m==0)return 0;
            if(n<m)return -1;

            int j=m-1;
            while(j>=0 && needle[j]==haystack[i+j]){
                j--;
            }
            if(j<0)return i;

            else {
                int shift = j-v[haystack[i+j]];
                if(shift<1)shift=1;

                i = i+shift;

            }
        }
        return -1;
        
    }
};