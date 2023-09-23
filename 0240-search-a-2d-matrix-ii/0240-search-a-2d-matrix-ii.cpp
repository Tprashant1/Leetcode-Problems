class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int s = 0;
        int e = col-1;
        while(s<row && e>=0){
            int element = matrix[s][e] ;
            if(element == target){
                return 1 ;
            }
            else if(element < target){
                s++;
            }
            else{
                e--;
            }
        }
        return 0;
    }
       

};