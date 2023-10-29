class Solution {
public:
    int arrangeCoins(int n) {
        // sqrt of n 
        // long i = 0, sum = 0;
        // while (sum <= n) sum += ++i;
        // return i-1;
        
        // log n
        long l = 0, h = n, mid, temp;
        while (l <= h) {
            mid = l + (h - l) / 2;
            temp = mid * (mid + 1) / 2;
            
            if (temp == n) return mid;
            
            if (temp <= n) l = mid + 1;
            else h = mid - 1;
        }
        return l-1;
    }
};