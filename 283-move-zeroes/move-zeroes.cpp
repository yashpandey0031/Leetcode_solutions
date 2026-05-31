class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> extra_nums;
        for(int i = 0; i< n;i++){
            if(nums[i] != 0){
                extra_nums.push_back(nums[i]);
            }
        }

        while(extra_nums.size() < n){
            extra_nums.push_back(0);
        }

        nums = extra_nums;
    }
};