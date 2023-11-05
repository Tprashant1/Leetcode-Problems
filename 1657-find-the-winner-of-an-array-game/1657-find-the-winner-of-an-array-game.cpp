class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int c =0;
        int cw = arr[0];
        int n = arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]>cw){
                cw = arr[i] ;
                c=1;
            }
            else{
                c++;
            }
            if(c==k){
                return cw;
            }
        }
        return cw;
    }
};