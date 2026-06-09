class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int maxEL  = INT_MIN;
        int minEL = INT_MAX;
        for(int num:nums){
            maxEL = max(maxEL,num);
            minEL = min(minEL,num);
        }

        return 1l * k * (maxEL-minEL);
    }
};