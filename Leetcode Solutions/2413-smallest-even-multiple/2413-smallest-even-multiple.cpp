class Solution {
public:
    // This function, 'smallestEvenMultiple', finds the smallest even multiple of the input integer 'n'.

    int smallestEvenMultiple(int n) {
        if (n % 2 == 0) {
            return n;   // If 'n' is already even, it is the smallest even multiple.
        } else {
            return 2 * n; // If 'n' is odd, the smallest even multiple is obtained by doubling 'n'.
        }
    }
};
