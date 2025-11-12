class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less, equal, more;
        less.reserve(nums.size());
        equal.reserve(nums.size());
        more.reserve(nums.size());

        for (int x : nums) {
            if (x < pivot) less.push_back(x);
            else if (x == pivot) equal.push_back(x);
            else more.push_back(x);
        }

        vector<int> ans;
        ans.reserve(nums.size());
        ans.insert(ans.end(), less.begin(), less.end());
        ans.insert(ans.end(), equal.begin(), equal.end());
        ans.insert(ans.end(), more.begin(), more.end());
        return ans;
    }
};
