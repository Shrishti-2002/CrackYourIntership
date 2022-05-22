//https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
//imp
class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int sum=0,n=v.size();
        for(int i=0;i<k;i++){
            sum+=v[i];
        }
        int ans=sum;
        int i=k-1,j=n-1;
        while(i>=0){
            sum+=v[j]-v[i];
            ans=max(sum,ans);
            i--;j--;
        }
        return ans;
    }
};
