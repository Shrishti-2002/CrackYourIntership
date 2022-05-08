//https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int k=(-1)*nums[i];
            int l=i+1,h=n-1;
            while(l<h){
                if(nums[l]+nums[h]==k){
                    s.insert({nums[i],nums[l],nums[h]});
                    l++; 
                    h--;
                }
                else if(nums[l]+nums[h]<k) l++;
                else h--;
            }
        }
        for(auto i=s.begin();i!=s.end();i++){
            ans.push_back(*i);
        }
        return ans;
    }
};
