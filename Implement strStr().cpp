//https://leetcode.com/problems/implement-strstr/

class Solution {
public:
    bool ifequal(string s,string p,int i,int j){
        string h;
        for(int k=i;k<j;k++){
            h+=s[k];
        }
        if(h==p) return true;
        return false;
    }
    int strStr(string haystack, string needle) {
        map<char,int> m;
        for(int i=0;i<needle.length();i++){
            m[needle[i]]++;
            if(m[needle[i]]==0) m.erase(needle[i]);
            m[haystack[i]]--;
            if(m[haystack[i]]==0) m.erase(haystack[i]);
        }
        int j=needle.length(),n=haystack.length(),i=0;
        while(j<n){
            if(m.size()==0 && ifequal(haystack,needle,i,j)) return i;
            m[haystack[i]]++;
            if(m[haystack[i]]==0) m.erase(haystack[i]);
            i++;
            m[haystack[j]]--;
            if(m[haystack[j]]==0) m.erase(haystack[j]);
            j++;
        }
        if(m.size()==0 && ifequal(haystack,needle,i,j)) return i;
        return -1;
    }
};
