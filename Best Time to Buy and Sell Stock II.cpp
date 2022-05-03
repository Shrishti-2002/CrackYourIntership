//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=1,p=0,sum=0;
        while(j<prices.size()){
            if(prices[j-1]>prices[j]){
                sum+=p;
                p=0;
                i=j;
            }
            else{
                p=prices[j]-prices[i];
            }
            j++;
        }
        sum+=p;
        return sum;
    }
};
