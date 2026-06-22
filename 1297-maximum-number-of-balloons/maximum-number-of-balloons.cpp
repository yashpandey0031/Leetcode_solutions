class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> m;

        for(char ch : text) {
            m[ch]++;
        }

        int count = 0;

        while (
            m['b'] >= 1 &&
            m['a'] >= 1 &&
            m['l'] >= 2 &&
            m['o'] >= 2 &&
            m['n'] >= 1
        ) {
            m['b']--;
            m['a']--;

            m['l']--;
            m['l']--;

            m['o']--;
            m['o']--;

            m['n']--;

            count++;
        }

        return count;
    }
};