//https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0) nums1=nums2;
        if(n==0) return;
        int p1=0,p2=0;
        int k=m;
        while(p1<k&& p2<n){
            if(nums1[p1]>nums2[p2]){
                int j=n+m-2;
                while(j>=p1){
                    nums1[j+1]=nums1[j];
                    j--;
                }
                nums1[p1]=nums2[p2];
                k++;
                p2++;
            }
            p1++;
        } 
        while(p2<n){
            nums1[p1++]=nums2[p2++];
        }
    }
};
