class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>count(26,0);
        vector<bool>visited(26,false);
        for(auto ch:s){
            count[ch-'a']++ ;
        }
        string result ;
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']--;
            if(!visited[s[i]-'a']){
              while(result.size() && result.back()>s[i] && count[result.back()-'a']>0){
                visited[result.back()-'a'] =0;
                result.pop_back();
              }
              result.push_back(s[i]);
              visited[s[i]-'a'] = 1 ;
            }
        }
        return result ;


    }
};