class Solution {
public:
    // This function, 'isThree', checks if a given integer 'n' has exactly three divisors.

    bool isThree(int n) {
        int c = 2;  // Initialize a counter 'c' to 2, accounting for the divisors 1 and 'n' itself.

        // Iterate through numbers from 2 to 'n/2' to check for additional divisors.
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                c++;  // If 'i' is a divisor of 'n', increment the counter 'c'.
            }
        }

        // Check if 'c' is equal to 3, indicating that 'n' has exactly three divisors.
        return c == 3;
    }
};
