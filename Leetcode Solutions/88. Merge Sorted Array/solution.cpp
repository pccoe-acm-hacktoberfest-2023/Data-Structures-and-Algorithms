class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m - 1;  // Index of the last element in nums1.
        int first = 0;     // Index of the first element in nums2.

        // Iterate while there are elements in both arrays.
        while (last >= 0 && first < n) {
            if (nums1[last] > nums2[first]) {
                // If the element in nums1 is greater, swap them to ensure proper ordering.
                swap(nums1[last], nums2[first]);
                last--;
                first++;
            } else {
                break;  // Stop if the element in nums1 is not greater than the element in nums2.
            }
        }

        // Sort the modified parts of nums1 and the entire nums2 separately.
        sort(nums1.begin(), nums1.begin() + m);
        sort(nums2.begin(), nums2.end());

        // Merge the two sorted arrays into nums1.
        for (int i = m; i < m + n; i++) {
            nums1[i] = nums2[i - m];
        }
    }
};
