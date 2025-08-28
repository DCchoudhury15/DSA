class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int counter =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
            if(counter>0){
                res+=s[i];
            }
            counter++;
        }else{
            counter--;
            if(counter>0){
                res+=s[i];
            }
        }
    }
    return res;
    }
};