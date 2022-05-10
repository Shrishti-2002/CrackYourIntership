//https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        float n=nums.size();
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
            if(m[nums[i]]==ceil(n/2)) return nums[i];
        }
        return 0;
    }
};
