class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = nums.size();
        if(k == 0 ) return 0;
        int i = 1;
        for(int j =1 ;j<k;j++){
            if(nums[j] != nums[j-1]){
                nums[i] = nums[j];
                i++;
            }
        }

        return i;

    }
};