class Solution {
public:
    // This function, 'maxProduct', takes a vector of integers 'nums' as input and
    // returns the maximum product of two distinct elements from the input vector.

    int maxProduct(vector<int>& nums) {
        // Initialize 'max' to store the maximum product and 't' as a temporary variable.
        int max = 0, t;

        // Use two nested loops to compare all possible pairs of distinct elements from the input vector.
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                // Calculate the product of two distinct elements and store it in 't'.
                t = (nums[i] - 1) * (nums[j] - 1);

                // Update 'max' with the maximum value between 't' and the current 'max'.
                max = t > max ? t : max;
            }
        }

        // Return the maximum product found.
        return max;
    }
};  // End of the Solution class.
