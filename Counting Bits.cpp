class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        if(n>=0)
        v.push_back(0);
        if(n>=1)
        v.push_back(1);
        int val=1;
        for(int i=2;i<n+1;i++){
            if((i-val)==val){
                val=i;
                v.push_back(1);
            }
            else{
                v.push_back(v[i-val]+1);
            }
        }
        return v;
    }
};
