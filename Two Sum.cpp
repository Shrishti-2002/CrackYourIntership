//https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size()==2) return {0,1};
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++) v.push_back({nums[i],i});
        sort(v.begin(),v.end());
        int l=0,h=nums.size()-1;
        while(l<h){
            if(v[l].first+v[h].first==target) return {v[l].second,v[h].second};
            else if(v[l].first+v[h].first<target) l++;
            else h--;
        }
        return {0,1};
    }
};
