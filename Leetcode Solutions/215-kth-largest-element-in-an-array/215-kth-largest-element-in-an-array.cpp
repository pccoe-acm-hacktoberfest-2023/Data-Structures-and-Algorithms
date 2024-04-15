class Solution {
public:
    // This function, 'findKthLargest', finds the kth largest element in a given vector 'nums'.

    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());  // Sort the 'nums' vector in ascending order.

        // Return the kth largest element, which is the element at the index 'nums.size() - k'.
        return nums[nums.size() - k];
    }
};
