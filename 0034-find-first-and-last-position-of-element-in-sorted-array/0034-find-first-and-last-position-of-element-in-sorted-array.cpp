class Solution {
private:
    int bs(vector<int>& nums,int target,bool finding){
        int s = 0;
        int e = nums.size()-1;
        int ind = -1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
                ind = mid;
                if(finding){
                    e = mid-1;
                }
                else{
                    s = mid+1;
                }
            }
            else if(nums[mid]<target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return ind;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = bs(nums,target,true);
        int r = bs(nums,target,false);
        if(l<=r){
            return {l,r};
        }
        else{
            return {-1,-1};
        }
    }
};