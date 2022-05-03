//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/


class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();
        int min_ele=INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++){ 
            if(p[i]<min_ele) min_ele=p[i];
            else{
                ans=max(p[i]-min_ele,ans);
            }
        }
        return ans;
        
    }
};
