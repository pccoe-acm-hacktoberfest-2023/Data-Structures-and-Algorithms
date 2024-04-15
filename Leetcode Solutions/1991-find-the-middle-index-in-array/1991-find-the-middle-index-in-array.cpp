class Solution {
public:
    // This function, 'findMiddleIndex', finds the index of the middle element in a given vector 'nums'.
    // The middle element is defined as the index where the sum of elements to the left equals the sum of elements to the right.

    int findMiddleIndex(vector<int>& nums) {
        int postfixsum = accumulate(nums.begin(), nums.end(), 0); // Calculate the sum of the entire array.
        int prefixsum = 0; // Initialize the prefix sum to 0.

        // Iterate through the elements in 'nums' to find the middle index.
        for (int i = 0; i < nums.size(); i++) {
            postfixsum -= nums[i]; // Subtract the current element from 'postfixsum' as it's not part of the prefix sum or postfix sum.

            // Check if the prefix sum is equal to the postfix sum. If true, return the current index.
            if (postfixsum == prefixsum) {
                return i;
            }

            prefixsum += nums[i]; // Add the current element to the prefix sum, as it's not the middle element candidate.
        }

        // If the loop completes without finding a middle index, return -1 (indicating there's no middle element).
        return -1;
    }
};
