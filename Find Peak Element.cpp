//https://leetcode.com/problems/find-peak-element/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1) return 0;
        for(int i=1;i<n-1;i++){
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]) return i;
        }
        if(nums[0]>nums[1]) return 0;
        else return n-1;
    }
};
