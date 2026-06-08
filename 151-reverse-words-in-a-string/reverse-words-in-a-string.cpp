class Solution {
public:
    string reverseWords(string s) {
       reverse(s.begin(),s.end());
       int l = 0; //left andright will be used to reverse the particular word   
       int r = 0;
       int n = s.length();
       int i = 0;
       while( i < n){
        while(i<n && s[i] != ' '){ //till the time i is less than n and i is not at a space 
            s[r] = s[i];
            r++;
            i++;
        }

        if(l<r) {
            reverse(s.begin()+l,s.begin()+r);
            s[r] = ' ';
            r++;

            l = r;
        }
        i++;
        
        
       }

       s=s.substr(0,r-1);
        return s;
    }
};