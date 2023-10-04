class Solution {
private:
    void solve(string digits,string res,int index,vector<string>&ans,string mapping[]){
        if(index >= digits.size()){
            ans.push_back(res);
            return;
        }
        int number = digits[index] - '0';
        string value = mapping[number] ;
        for(int i=0;i<value.size();i++){
            res.push_back(value[i]);
            solve(digits,res,index+1,ans,mapping);
            res.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size()==0){
            return ans;
        }
        string res;
        int index = 0 ;
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,res,index,ans,mapping);
        return ans;
    }
};