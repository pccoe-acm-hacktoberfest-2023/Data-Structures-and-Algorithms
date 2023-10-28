class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        unsigned long int rev=0, x1 = x;
        int n;
        while(x1){
            // checking overflow
            // if(rev > INT_MAX/10 || rev < INT_MIN/10){
            //     return 1;
            // }
            n=x1%10;
            rev = rev*10 + n;
            x1 -= n;
            x1 /= 10;
            
        }
        if(rev == x){
            return true;
        }
        return false;
    }
};