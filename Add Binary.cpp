//https://leetcode.com/problems/add-binary/

class Solution {
public:
    string addBinary(string a, string b) {
        int i=0,carry=0;
        string str;
        while(i<a.length() && i<b.length()){
            int al=a[a.length()-i-1]-'0',bl=b[b.length()-i-1]-'0';
            int val=(al+bl+carry)%2;
            carry=(al+bl+carry)/2;
            str+=val+'0';
            i++;
        }
        while(i<a.length()){
            int al=a[a.length()-i-1]-'0';
            int val=(al+carry)%2;
            carry=(al+carry)/2;
            str+=val+'0';
            i++;
        }
        while(i<b.length()){
            int bl=b[b.length()-i-1]-'0';
            int val=(bl+carry)%2;
            carry=(bl+carry)/2;
            str+=val+'0';
            i++;
        }
        if(carry>0) str+=carry+'0';
        reverse(str.begin(),str.end());
        return str;
    }
};
