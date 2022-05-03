//https://leetcode.com/problems/move-zeroes/submissions/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=-1;
        for(int i=0;i<nums.size();i++){
            if(j==-1){
                if(nums[i]==0) j=i;
            }
            else if(nums[i]!=0) {swap(nums[i],nums[j]); j++;}
        }
        
    }
};
