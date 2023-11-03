class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>res;
        int c = 1;
        int s = target.size();
        for(int i=0;i<s;i++){
            while(c<target[i]){
                res.push_back("Push");
                res.push_back("Pop");
                c=c+1;
            }
            res.push_back("Push");
            c=c+1;
        }
        return res;
    }
};