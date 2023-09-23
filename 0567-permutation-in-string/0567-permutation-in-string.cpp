class Solution {
private:
    bool isEqual(int c1[26],int c2[26]){
      for(int i=0;i<26;i++){
        if(c1[i] != c2[i]){
          return 0;
        }
      }
      return 1;
    
    }

public:
    bool checkInclusion(string s1, string s2) {
        int c1[26] ={0};
        for(int i=0;i< s1.length();i++){
          int index = s1[i]-'a'  ;
          c1[index]++;
        }

        int i=0;
        int wndsize = s1.length() ;
        int c2[26] ={0};
        while(i<wndsize && i< s2.length()){
          int ind = s2[i]-'a';
          c2[ind]++;
          i++;
        }
        if(isEqual(c1,c2)){
          return true;
        }
        
        while(i<s2.length()){
          char n_ch = s2[i] ;
          int inde = n_ch -'a';
          c2[inde]++;

          char o_ch1 = s2[i-wndsize];
          inde = o_ch1- 'a' ;
          c2[inde]-- ;
          i++;

          if(isEqual(c1,c2)){
            return true;
          }
        }
        return false;
    }
};