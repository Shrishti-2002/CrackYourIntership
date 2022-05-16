//https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        long long sign=0,ans=0;
        if(x<0) sign=1;
        x=abs(x);
        for(int p=x;p>0;p/=10){
            int r=p%10;
            if((ans*10+r)>=INT_MAX) return 0;
            ans=(ans*10+r);
            
        }
        if(sign==1) return  ans*-1;
        return ans;
    }
};
