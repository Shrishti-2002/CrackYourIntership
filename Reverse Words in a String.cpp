//https://leetcode.com/problems/reverse-words-in-a-string/

class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        stack<string> st;
        for(int i=0;i<n;i++){
            string temp="";
            while(s[i]!=' ' && i<n){
                temp+=s[i];
                i++;
            }
            if(temp!="") st.push(temp);
        }
        string ans;
       while(!st.empty()){
           ans+=st.top();
           st.pop();
           if(!st.empty())ans+=" ";
       }
        return ans;
    }
};
