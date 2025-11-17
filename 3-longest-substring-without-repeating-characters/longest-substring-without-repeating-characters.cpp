class Solution {
    public:
    int lengthOfLongestSubstring(string s){
        int hashArray[256];
        fill(hashArray, hashArray+256 , -1);
        int n = s.size();
        int l = 0;
        int r = 0;
        int len;
        int max_length = 0;
        while(r<n){
            if(hashArray[s[r]] != -1){ //checking if hasharray is not empty
                if(hashArray[s[r]] >= l){
                    l =hashArray[s[r]] + 1;
                }
            }
            len = r - l + 1;
            max_length = max(len,max_length);
            hashArray[s[r]] = r;
            r++;

        }
        return max_length;
    }
};