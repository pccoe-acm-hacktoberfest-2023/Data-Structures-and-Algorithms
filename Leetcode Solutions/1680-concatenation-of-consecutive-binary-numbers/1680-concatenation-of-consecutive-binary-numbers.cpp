class Solution {
public:
    // This function, 'concatenatedBinary', calculates and returns the result of
    // concatenating the binary representation of integers from 1 to 'n' (inclusive).

    int concatenatedBinary(int n) {
        // Define a constant for the modulo operation.
        int mod = 1e9 + 7;

        // Initialize 'ans' to store the concatenated binary representation and 'len' for the current binary length.
        long long ans = 0;
        int len = 0;

        // Iterate through integers from 1 to 'n'.
        for (int i = 1; i <= n; i++) {
            // Check if 'i' is a power of 2 (i.e., it has only one bit set).
            if ((i & (i - 1)) == 0) {
                len++;  // If 'i' is a power of 2, increase 'len'.
            }

            // Concatenate the binary representation of 'i' to 'ans' while considering the binary length.
            ans = ((ans << len) + i) % mod;
        }

        // Return the concatenated binary representation modulo 'mod'.
        return ans;
    }
};
