
class Solution {
  public:
    bool isBalanced(string& k) {
        stack<char>st;
        // code here
        for(int i=0;i<k.size();i++)
        {
            if(!st.empty() && ((int(st.top())==int(k[i])-2)||
            (int(st.top())==int(k[i])-1))) st.pop();
            else st.push(k[i]);
        }
        return st.empty();
    }
};