
//https://www.geeksforgeeks.org/a-product-array-puzzle/

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       vector<long long> v; 
       if(n==1) return {1};
       vector<long long> suf;
       vector<long long> pri;
       long long s=1,p=1;
       for(int i=0;i<n;i++){
           s*=nums[i];
           suf.push_back(s);
           p*=nums[n-i-1];
           pri.push_back(p);
       }
       reverse(pri.begin(),pri.end());
       v.push_back(pri[1]);
       for(int i=1;i<n-1;i++){
           v.push_back(suf[i-1]*pri[i+1]);
       }
       v.push_back(suf[n-2]);
       return v;
    }
};
