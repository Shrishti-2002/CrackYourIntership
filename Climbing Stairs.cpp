class Solution {
public:
    int climbStairs(int n) {
        int t[n+1];
        for(int i=0;i<n+1;i++){
            if(i==0) t[i]=0;
            else if(i==1) t[i]=1;
            else if(i==2) t[i]=2;
            else t[i]=t[i-1]+t[i-2];
        }
        return t[n];
    }
};
