class Solution {
public:
    // This function, 'removeDuplicates', removes duplicates from a sorted array represented by 'nums'.
    // It returns the length of the modified array without duplicates.

    int removeDuplicates(vector<int>& nums) {
        int i = 0;  // Initialize a pointer 'i' to keep track of the unique elements.

        for (int j = 1; j < nums.size(); j++) {
            // Compare the element at index 'i' with the element at index 'j'.
            if (nums[i] != nums[j]) {
                i++;  // Increment 'i' to move to the next unique element.
                nums[i] = nums[j];  // Update the next unique element with the value at index 'j'.
            }
        }

        // 'i' now represents the last index of the modified array without duplicates.
        // The length of the modified array (without duplicates) is 'i + 1'.
        return i + 1;
    }
};
