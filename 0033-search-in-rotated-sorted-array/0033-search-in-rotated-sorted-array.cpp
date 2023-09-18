class Solution {
public:
    int getpivot(vector<int>& nums){
        int s = 0;
        int n =nums.size() ;
        int e = (n)-1 ;
        int mid = s+(e-s)/2 ;
        while(s<e){
            if(nums[mid]>=nums[0]){
                s = mid+1 ;
            }
            else{
                e=mid ;
            }
            mid = s+(e-s)/2 ;
        }
        return s;
    }

    int BinarySearch(vector<int>& nums,int s,int e,int target){
        // int start = s ;
        // int end = e ;
        int mid = s+(e-s)/2 ;
        while(s<=e){
            if(nums[mid]==target){
                return mid ;
            }
            else if(nums[mid]<target){
                s=mid+1 ;
            }
            else{
                e=mid-1 ;
            }
            mid = s+(e-s)/2 ;
        }
        return -1 ;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size() ;
        int pivot = getpivot(nums) ;
        if(target>=nums[pivot] && target<=nums[n-1]){
            return BinarySearch(nums,pivot,n-1,target);
        }
        else{
            return BinarySearch(nums,0,pivot-1,target);
        }
    }
};