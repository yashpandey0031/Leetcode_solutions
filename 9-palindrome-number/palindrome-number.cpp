class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        int reverseDigit = 0;
        if(x<0) return false;
        while(x > 0){
            int ld = x%10;
            
            if(reverseDigit > INT_MAX / 10)
                return false;

            reverseDigit = (reverseDigit*10)+ld;
            x = x/10;
        }

        return reverseDigit == original;
    }
};