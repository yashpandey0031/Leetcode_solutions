class Solution {
public:
    int search(vector<int>& nums, int target) {
        int target_position = -1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == target){
                target_position = i;
            } 
        } 
        return target_position;     
    }
};