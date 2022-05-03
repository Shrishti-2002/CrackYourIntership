//https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1,i=1;
        while(j<nums.size()){
            if(nums[j]!=nums[j-1]){
                nums[i]=nums[j];
                i++;
            }
            j++;
        }
        return i;
    }
};
