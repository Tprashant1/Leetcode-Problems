class Solution {
public:
    int countHomogenous(string s) {
        int m=1000000000+7;
        int ans=0;
        int curr_cnt=1;
        ans+=1;
        for(int i=1;i<s.length();i++){
            if(s[i]!=s[i-1]){
                curr_cnt=1;
                ans+=curr_cnt;
            }
            else{
                curr_cnt++;
                ans+=curr_cnt;
                ans=ans%m;
            }
        }
        return ans;
    }
};