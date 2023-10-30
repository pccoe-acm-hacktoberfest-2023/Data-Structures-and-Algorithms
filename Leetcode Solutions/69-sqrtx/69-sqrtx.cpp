class Solution {
public:
    int mySqrt(int x) {
        int l = 0;                     // Initialize the lower bound to 0.
        long long h = INT_MAX;         // Initialize the upper bound to the maximum possible integer value.
        long long sq, m, ans;         // Initialize variables for square, mid, and the final answer.

        while (l <= h) {
            m = l + (h - l) / 2;      // Calculate the middle value using binary search.

            sq = m * m;               // Calculate the square of the middle value.

            if (sq <= x) {
                ans = m;              // If the square is less than or equal to x, update the answer and move the lower bound.
                l = m + 1;
            } else {
                h = m - 1;             // If the square is greater than x, move the upper bound.
            }
        }

        return ans;                   // Return the integer part of the square root as the result.
    }
};
