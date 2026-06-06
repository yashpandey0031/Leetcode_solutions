class Solution{
public:
    string removeOuterParentheses(string s){
        stack<char> st;
        string ans;
        for(int i = 0; i < s.size();i++){
            char ch = s[i];

            if(ch == '(' || ch =='{' || ch == '['){
                if(!st.empty())
                    ans += ch;

                st.push(ch); //for adding the very first element
            } else {
                st.pop();
                if(!st.empty())
                    ans += ch;
            }
        }
        return ans;
    }
};