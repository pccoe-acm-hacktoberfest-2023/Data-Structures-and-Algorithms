class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0;       // Left pointer for 0s
        int mid = 0;     // Middle pointer for 1s
        int h = nums.size() - 1; // Right pointer for 2s

        while (mid <= h) {
            if (nums[mid] == 0) {
                // If the element at mid is 0, move it to the left side.
                swap(nums[l++], nums[mid++]);
            } else if (nums[mid] == 1) {
                // If the element at mid is 1, it's already in the correct position.
                mid++;
            } else {
                // If the element at mid is 2, move it to the right side.
                swap(nums[mid], nums[h--]);
            }
        }
    }
};
