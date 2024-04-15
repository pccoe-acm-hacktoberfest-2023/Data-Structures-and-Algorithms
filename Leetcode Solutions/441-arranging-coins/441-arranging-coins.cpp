class Solution {
public:
    int arrangeCoins(int n) {
        long l = 0, h = n, mid, temp;

        // Perform binary search to find the maximum number of complete rows.
        while (l <= h) {
            mid = l + (h - l) / 2;   // Calculate the middle point.
            temp = mid * (mid + 1) / 2;  // Calculate the total number of coins in the first 'mid' rows.

            if (temp == n) {
                return mid;  // If the total matches 'n', return 'mid' as the answer.
            }

            if (temp <= n) {
                l = mid + 1;  // If the total is less than 'n', search the right half.
            } else {
                h = mid - 1;  // If the total is greater than 'n', search the left half.
            }
        }

        return l - 1;  // Return 'l - 1' as the number of complete rows because 'l' counts one row too many.
    }
};
