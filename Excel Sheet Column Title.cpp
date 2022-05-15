//https://leetcode.com/problems/excel-sheet-column-title/

class Solution {
public:
    string convertToTitle(int p) {
        string s;
        while(p>0){
            if(p%26==0) {s+='Z'; p-=1;}
            else
            s+=(p%26)-1+'A';
            p/=26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
