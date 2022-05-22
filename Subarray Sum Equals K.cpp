class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        map<int,int> m;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==k) count++;
            count+=(m[nums[i]-k]);
            
            m[nums[i]]++;
        }
        return count;
    }
};
