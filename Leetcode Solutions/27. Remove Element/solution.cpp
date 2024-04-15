class Solution {
public:
    // This function, 'removeElement', removes all occurrences of the value 'val' from the array represented by 'nums'.
    // It returns the length of the modified array after removing the elements.

    int removeElement(vector<int>& nums, int val) {
        int count = 0;  // Initialize a count to keep track of non-'val' elements.

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                // If the current element is not equal to 'val', copy it to the 'count' position
                // (which represents the position of the next non-'val' element) and increment 'count'.
                nums[count] = nums[i];
                count++;
            }
        }

        // 'count' now represents the number of non-'val' elements in the modified array.
        // The function returns 'count' as the length of the modified array after removing 'val'.
        return count;
    }
};
