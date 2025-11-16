class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;
        int max_length = 0;
        for( i = 0; i < n ; i++){
                int hashArray[256] = {0};
            for(j = i ; j < n ; j++ ){
                if (hashArray[s[j]] == 1) {
                    break;                 // character repeated → stop
                } 


                hashArray[s[j]] = 1; //making as seen

                int len = j - i + 1;
                max_length = max(len,max_length);


            }
        }

        return max_length;

    }
};