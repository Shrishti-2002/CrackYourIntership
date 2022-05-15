//https://leetcode.com/problems/minimum-moves-to-equal-array-elements/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        if(n==0 || n==1) return 0;
        sort(nums.begin(),nums.end());
        int diff=nums[n-1]-nums[0];
        int sum=0;
        int j=n-1;
        while(diff!=0 && j>0){
            sum+=diff;
            j--;
            diff=nums[j]-nums[0];
        }
        return sum;
    }
};
