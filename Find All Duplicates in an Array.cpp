//https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        int arr[n+1];
        memset(arr,0,sizeof(arr));
        vector<int>v;
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
            if(arr[nums[i]]==2) v.push_back(nums[i]);
        }
        return v;
    }
};
