class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> res;
        for(int i=0;i<operations.size();i++){
            if( operations[i]=="D"){
                res.push_back(2*res[res.size()-1]);
            }
            else if( operations[i]=="C"){
                res.pop_back();
            }
            else if( operations[i]=="+"){
                res.push_back( res[res.size()-1]+ res[res.size()-2]);
            }
            else{
                res.push_back(stoi( operations[i]));
            }
        }
        int sum = 0;
        for(int i=0;i<res.size();i++){
           sum = sum + res[i];
        }
        return sum;

    }
};