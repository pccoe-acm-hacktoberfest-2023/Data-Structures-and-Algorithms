class Solution {
public:
    int mySqrt(int x) {
        int l=0;
        long long h=INT_MAX;
        long long sq, m, ans;
        while(l<=h){
            m = l+(h-l)/2;
            sq = m*m;
            if(sq <= x){
                ans = m;
                l = m+1;
            }
            else{
                h = m-1;
            }
        }
        return ans;
    }
};