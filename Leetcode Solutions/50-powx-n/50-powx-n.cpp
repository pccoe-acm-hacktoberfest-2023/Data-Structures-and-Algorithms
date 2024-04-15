class Solution {
public:
    // Iterative version of the power function.
    double myPow(double x, int n) {
        double ans = 1.0;
        long long n2 = abs(n);  // Take the absolute value of n to handle negative exponents.

        while (n2 != 0) {
            if (n2 % 2 == 0) {
                x *= x;     // Square x when the exponent is even.
                n2 /= 2;    // Halve the exponent.
            } else {
                ans *= x;   // Multiply ans by x when the exponent is odd.
                n2--;       // Decrement the exponent.
            }
        }

        if (n < 0) return 1.0 / ans;  // Invert the result for negative exponents.
        return ans;
    }

    // Recursive version of the power function (not included in the comments above).
    double myPow(double x, int n) {
        if (n == 0) return 1.0;
        if (n < 0) {
            x = 1.0 / x;
            n = -n;
        }
        double half = myPow(x, n / 2);
        if (n % 2 == 0) return half * half;
        return half * half * x;
    }
};
