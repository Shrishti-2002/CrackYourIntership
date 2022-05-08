//https://leetcode.com/problems/4sum/

class Solution {
public:
    void threesum(vector<vector<int>>&v,int k,int j,vector<int> nums){
        set<vector<int>> s;
        for(int i=j+1;i<nums.size()-2;i++){
            int m=k*(-1)-nums[i];
            int l=i+1,h=nums.size()-1;
            while(l<h){
                if(nums[l]+nums[h]==m) {
                    s.insert({nums[j],nums[i],nums[l],nums[h]});
                    l++;
                    h--;
                }
                else if(nums[l]+nums[h]>m) h--;
                else l++;
            }
        }
        for(auto i=s.begin();i!=s.end();i++){
            v.push_back(*i);
        }
    }
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4) return {};
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++){
            if(i!=0 && nums[i]==nums[i-1]) continue;
            threesum(v,nums[i]-target,i,nums);
        }
        return v;
    }
};
