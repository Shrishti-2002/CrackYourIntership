//https://www.geeksforgeeks.org/chocolate-distribution-problem/

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        long long ans=INT_MAX,diff;
        sort(a.begin(),a.end());
        for(int i=0;i<=(n-m);i++){
            diff=a[i+m-1]-a[i];
            ans=min(ans,diff);
        }
        return ans;
    }   
};
