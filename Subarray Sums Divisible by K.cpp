// https://leetcode.com/problems/subarray-sums-divisible-by-k/

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> m;
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        int count=0;
        m[0]=1;
        for(int i=0;i<n;i++){
            int r=nums[i]%k;
            if(r<0) r+=k;
            count+=m[r];
            m[r]++;
        }
        return count;
    }
};
