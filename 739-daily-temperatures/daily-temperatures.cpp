class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);      // Result initialized with 0
        stack<int> st;              // Stores indices

        for (int i = 0; i < n; i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int index = st.top();  // Get index
                st.pop();              // Remove it
                ans[index] = i - index;
            }
            st.push(i);
        }
        return ans;
    }
};
