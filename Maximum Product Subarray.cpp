class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mi=nums[0],ma=nums[0],ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0) swap(mi,ma);
            mi=min(nums[i],mi*nums[i]);
            ma=max(nums[i],ma*nums[i]);
            ans=max(ans,ma);
        }
        return ans;
    }
};
