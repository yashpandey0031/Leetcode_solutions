class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low , high , mid;

        low = 0, high = nums.size()- 1;
        int firstIndex = -1;
        while(low <= high){
            mid = low + (high-low)/2;
            if(nums[mid] == target){
                firstIndex = mid;
                high = mid - 1;
            }else if (nums[mid]<target){
                low = mid+1;

            }else {
                high = mid-1;
            }
        }


        low = 0, high = nums.size()-1;
        int lastindex=-1;
        while(low <= high){
            mid = low + (high-low)/2;
            if(nums[mid] == target){
                lastindex = mid;
                low = mid +1;
            }else if(nums[mid]<target){
                low = mid + 1;
            }else {
                high = mid -1;
            }
        }

        return{firstIndex,lastindex};

    }
};