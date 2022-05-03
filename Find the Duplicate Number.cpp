//https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int arr[n+1];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
            if(arr[nums[i]]>1) return nums[i];
        }
        return -1;
    }
};
