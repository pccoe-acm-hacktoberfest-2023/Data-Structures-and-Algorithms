class Solution {
public:
    // This function, 'findMedianSortedArrays', finds the median of two sorted arrays, 'nums1' and 'nums2'.

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Merge 'nums2' into 'nums1'.
        for (auto i : nums2) {
            nums1.push_back(i);
        }

        // Sort the merged array.
        sort(nums1.begin(), nums1.end());

        // Check if the merged array has an even or odd number of elements.
        if (nums1.size() % 2 == 0) {
            // If the number of elements is even, calculate and return the average of the two middle elements.
            return 1.0 * (nums1[nums1.size() / 2 - 1] + nums1[nums1.size() / 2]) / 2;
        } else {
            // If the number
