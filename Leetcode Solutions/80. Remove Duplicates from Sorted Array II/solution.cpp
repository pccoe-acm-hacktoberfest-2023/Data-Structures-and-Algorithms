class Solution {
    public int removeDuplicates(int[] nums) {
        if (nums.length < 3) {
            return nums.length;
        }

        int i = 0;  // The index used to iterate through the input array.
        int j = 0;  // The index used to update the result array without more than 2 duplicates.

        while (i < nums.length) {
            nums[j++] = nums[i++]; // Copy the current number to the result array.

            if (i < nums.length && nums[i] == nums[j - 1]) {
                nums[j++] = nums[i++]; // If the next number is the same, copy it to the result array.
            }

            while (i < nums.length && nums[i] == nums[j - 1]) {
                i++; // Skip any additional duplicates beyond 2.
            }
        }

        return j; // Return the length of the result array with up to 2 duplicates per element.
    }
}
