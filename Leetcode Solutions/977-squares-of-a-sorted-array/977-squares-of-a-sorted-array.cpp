class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;  // Initialize a vector to store the squared values in sorted order.
        int i = 0;  // Initialize a pointer for the beginning of the array.
        int j = nums.size() - 1;  // Initialize a pointer for the end of the array.

        // Traverse the array from both ends, comparing absolute values.
        while (i <= j) {
            if (abs(nums[i]) >= abs(nums[j])) {
                ans.insert(ans.begin(), nums[i] * nums[i]);  // Insert the square of nums[i] at the beginning of ans.
                i++;  // Move the pointer to the next element.
            } else {
                ans.insert(ans.begin(), nums[j] * nums[j]);  // Insert the square of nums[j] at the beginning of ans.
                j--;  // Move the pointer to the previous element.
            }
        }

        return ans;  // Return the vector containing sorted squared values.
    }
};
