class Solution {
public:
    double myPow(double x, int n) {
        // if(n==1 || n==0) return n;
        // double ans=1;
        // if(n<0){
        //     x = 1/x;
        //     n = -n;
        // }
        // while(n--){
        //     ans *= x;
        // }
        // return ans;
        // optimized version , can also be done using recursion
        double ans = 1.0;
        long long n2 = abs(n);
        while(n2!=0){
            if(n2%2==0){
                x*=x;
                n2/=2;
            }
            else{
                ans *= x;
                n2--;
            }
        }
        if(n<0) return 1.0/ans;
        return ans;
    }
};