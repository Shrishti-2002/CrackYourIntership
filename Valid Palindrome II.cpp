//https://leetcode.com/problems/valid-palindrome-ii/

class Solution {
public: 
    bool ispal(string s,int i,int j,int p){
       while(j>i){
           if(s[i]==s[j]) {i++;j--;}
           else return false;
       }
        return true;
    }
    bool validPalindrome(string s) {
        int n=s.length();
        int i=0,j=n-1;
        while(j>i){
           if(s[i]==s[j]) {i++;j--;}
           else{
               return (ispal(s,i+1,j,1) || ispal(s,i,j-1,1));
           } 
        }
        return true;
    }
};
