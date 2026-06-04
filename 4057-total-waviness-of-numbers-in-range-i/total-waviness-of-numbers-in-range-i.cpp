class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int waviness = 0;
        
        for(int i=num1;i<=num2;i++){
            string num = to_string(i);
            int number_length = num.length();
            int peak = 0;
            int valley = 0;
            if(number_length<3){
                peak = peak +0;
            }
            for (int j = 1; j < number_length-1; j++) {
        
        int left = num[j - 1] - '0';
        int curr = num[j] - '0';
        int right = num[j + 1] - '0';
        if(curr > left && curr > right){
            peak++;
        }
        else if (curr < left && curr < right){
            valley++;
        }
        
    }
    
    waviness = waviness + valley + peak;
            
            
        }
        return waviness;
        
    }
};