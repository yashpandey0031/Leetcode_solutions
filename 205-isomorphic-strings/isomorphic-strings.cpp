class Solution {
public:
    bool isIsomorphic(string s, string t) { //characters should be at same indice 
        unordered_map<char,int> charIndexS;
        unordered_map<char,int> charIndexT;
        for(int i = 0;i < s.length();i++){
            if (charIndexS.find(s[i]) == charIndexS.end()){ //find s[i] if it already exists , the below code will only fun if it doesnt exist
                charIndexS[s[i]] = i;
            }

            if(charIndexT.find(t[i]) == charIndexT.end()){
                charIndexT[t[i]] = i;
            }

            if(charIndexS[s[i]] != charIndexT[t[i]]){
                return false;
            }
        }

        return true;
    }
};