class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        for (int i = 0; i < strs[0].size(); i++) {   // column-wise
            char c = strs[0][i];

            for (int j = 1; j < strs.size(); j++) { // check all strings
                if (i >= strs[j].size() || strs[j][i] != c) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0]; // only after full loop completes
    }
};