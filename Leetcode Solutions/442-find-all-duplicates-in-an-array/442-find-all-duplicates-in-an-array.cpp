class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // Sort the input vector to group duplicate elements together.
        sort(nums.begin(), nums.end());

        vector<int> duplicates; // Create a vector to store the duplicate elements.

        for(int i = 0; i < nums.size() - 1; i++) {
            // Check if the current element is equal to the next element, indicating a duplicate.
            if(nums[i] == nums[i + 1]) {
                duplicates.push_back(nums[i]); // Add the duplicate element to the 'duplicates' vector.
            }
        }

        return duplicates; // Return the vector containing all the duplicate elements.
    }
};
