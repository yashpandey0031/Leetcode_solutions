class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> allnumbers;
        vector<string> answers;
        for(int i = 1;i <= n;i++){
            allnumbers.push_back(to_string(i)); //we have to conver the mismatch
            }

        for(int i = 0;i<allnumbers.size();i++){
            int current_index = stoi(allnumbers[i]);
            if(current_index % 3 == 0 && current_index % 5 == 0){
                answers.push_back("FizzBuzz");
            }
            else if(current_index % 3 == 0) answers.push_back("Fizz");
            else if(current_index % 5== 0) answers.push_back("Buzz");
            else if(current_index == current_index) answers.push_back(to_string(current_index));
        }

        return answers;
        }

        
    };
