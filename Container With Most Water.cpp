class Solution {
public:
    int maxArea(vector<int>& h) {
        int area=0;
        int n=h.size();
        int i=0,j=n-1;
        while(j>i){
            int p=min(h[i],h[j])*(j-i);
            area=max(area,p);
            if(h[j]>h[i]) i++;
            else if(h[i]>h[j]) j--;
            else {
                i++; j--;
            }
        }
        return area;
    }
};
