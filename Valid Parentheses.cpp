//https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='{'||s[i]=='('||s[i]=='[') st.push(s[i]);
            
            else if(!st.empty() &&((s[i]=='}' && st.top()=='{')||(s[i]==')' && st.top()=='(')||(s[i]==']' && st.top()=='[')))
                st.pop();
            
            else return false;
        }
        if(st.empty())return true;
        return false;
    }
};
