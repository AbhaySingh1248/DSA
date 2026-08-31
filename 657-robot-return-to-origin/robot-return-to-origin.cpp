class Solution {
public:
    bool judgeCircle(string moves) {
        int countr=0;
        int countl=0;
        int countu=0;
        int countd=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U')countu++;
            else if(moves[i]=='D')countd++;
            else if(moves[i]=='R')countr++;
            else countl++;
        }
        if((countr==countl) && countu==countd)return true;
        else return false;
        
    }
};