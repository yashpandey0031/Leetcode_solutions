class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> frequency_map;

        for (int x : nums) {
            if (frequency_map[x] > 0) {   // already seen
                return true;
            }
            frequency_map[x]++;
        }
        return false;
    }
};
