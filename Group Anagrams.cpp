//https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        if(s.size()==1 || s.size()==0) return {s};
        vector<vector<string>> ans;
        vector<pair<string,int>> p;
        for(int i=0;i<s.size();i++){
            string st=s[i];
            if(st.length()>1)
            sort(st.begin(),st.end());
            p.push_back({st,i});
        }
        sort(p.begin(),p.end());
        for(int i=0;i<p.size();){
           vector<string> b; 
            b.push_back(s[p[i].second]);
            i++;
            while(i<p.size() && p[i].first==p[i-1].first){
                b.push_back(s[p[i].second]);
                i++;
            }
            ans.push_back(b);
        }
        return ans;
    }
};
