// https://leetcode.com/problems/set-matrix-zeroes/


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> r;
        set<int> c;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        for(auto i=r.begin();i!=r.end();i++){
            int p=(*i);
            for(int j=0;j<n;j++){
                matrix[p][j]=0;
            }
        }
        for(auto i=c.begin();i!=c.end();i++){
            int p=(*i);
            for(int j=0;j<m;j++){
                matrix[j][p]=0;
            }
        }
        
    }
};
