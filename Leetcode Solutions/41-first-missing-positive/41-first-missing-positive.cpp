class Solution {
public:
    // This function, 'firstMissingPositive', finds and returns the first missing positive integer
    // from the input array 'nums'.

    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int> m;  // Create an unordered map to store the frequency of elements in 'nums'.

        // Populate the map 'm' with element frequencies from the 'nums' array.
        for (int i : nums) {
            m[i]++;
        }

        // Iterate through positive integers starting from 1 and find the first missing positive integer.
        for (int i = 1;; i++) {
            if (m[i] == 0) {
                return i;  // If 'i' is not present in 'nums', return it as the first missing positive integer.
            }
        }

        // This code will never reach this point because the function will always return before it.
        return -1;
    }
};
