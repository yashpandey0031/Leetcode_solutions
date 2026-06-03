class Solution {
public:
    int calc(vector<int>& a1, vector<int>& t1, vector<int>& a2, vector<int>& t2) {
        // find earliest finish of first ride
        int minEnd = INT_MAX;
        for (int i = 0; i < a1.size(); i++) {
            minEnd = min(minEnd, a1[i] + t1[i]);
        }

        // for each second ride, find earliest finish
        int ans = INT_MAX;
        for (int i = 0; i < a2.size(); i++) {
            ans = min(ans, max(minEnd, a2[i]) + t2[i]);
        }
        return ans;
    }

    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration,
                           vector<int>& waterStartTime, vector<int>& waterDuration) {
        int x = calc(landStartTime, landDuration, waterStartTime, waterDuration);
        int y = calc(waterStartTime, waterDuration, landStartTime, landDuration);
        return min(x, y);
    }
};