class Solution {
public:
    int myAtoi(string s) {
        //possible cases
        //ignore leading white spaces
        //step 1 - skip any whitespaces
        int i = 0;
        int l = s.length();
        while( i <l && isspace(s[i])){
            i++;
        }
        //if no more characters 
        // "                    "
        if(i==l){
            return 0;
        } 

        //check for valid sign 
        bool negative = false;
        //"                -23"
        if(s[i] == '-'){
            negative = true;
            i++;
        }
        //"                  +23"
        else if(s[i] =='+'){
            //move on to the next character
            i++;
        }
        //"             e23"
        else if(!isdigit(s[i])){
            return 0;
        }

        //if no more characters
        if(i==l){
            return 0;
        }

        //check for leading zeroes / skip them 
        while(i < l &&s[i]=='0'){//if i is 0 , skip 
            i++;
        }
        //"            +0000"
        //if no more characters 
        if(i == l){
            return 0;
        }

        //extract numbers and return the int value
        int value = 0;
        int max = INT_MAX/10;
        int min  = INT_MIN/10;
        while(i<l && isdigit(s[i])){
            int digit = s[i]-'0';//get the corresponding digit

            

            //check if val is within limits
            if(value > max){
                return INT_MAX;

            }

            else if(value == max && digit>7){
                return INT_MAX;
            }

            if(value < min){
                return INT_MIN;

            }

            else if(value == min && digit>8){
                return INT_MIN;
            }


            if(negative){
                value = value*10 +(-digit);
            }
            else {
                value = value*10+ digit;
            }
            i++;
        }


        return value;



        
    }
};