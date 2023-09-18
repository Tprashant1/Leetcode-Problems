class Solution {
public:
    
    int findMin(vector<int>& nums) {
        int s=0;
        int n = nums.size() ;
        int e = n-1 ;
        int res = INT_MAX ;
        while(s<=e){
            int mid = s+(e-s)/2 ;
            if(nums[s]<=nums[mid]){
                res = min(res,nums[s]);
                s=mid+1 ;
            }
            else{
                res = min(res,nums[mid]);
                e=mid-1 ;
            }
        }
        return res ;  
    }
};