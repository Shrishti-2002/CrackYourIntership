//https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string c=strs[0];
        for(int i=1;i<n;i++){
            for(int j=0;j<c.length();j++){
                if(strs[i][j]!=c[j]) {c.resize(j); break;}
            }
            if(c.length()==0) return "";
        }
        return c;
    }
};
