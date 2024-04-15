// int bsearch(vector<int>& nums, int target, int start) {
//     int h = nums.size() - 1;
//     int l = start, m;
//     while (l <= h) {
//         m = l + (h - l) / 2;
//         if (nums[m] == target) return 1;
//         else if (nums[m] < target) l = m + 1;
//         else h = m - 1;
//     }
//     return 0;
// }

class Solution {
public:
    // This function, 'arithmeticTriplets', counts the number of arithmetic triplets in the given vector 'nums'
    // with the given difference 'diff'.

    int arithmeticTriplets(vector<int>& nums, int diff) {
        // Method using binary search (commented out).
        // int ans = 0;
        // for (int i = 0; i <= nums.size() - 3; i++) {
        //     if (bsearch(nums, nums[i] + diff, i + 1) && bsearch(nums, nums[i] + (2 * diff), i + 1)) {
        //         ans++;
        //     }
        // }
        // return ans;

        map<int, int> m;  // Create a map to store the count of elements in 'nums'.
        int count = 0;    // Initialize a count to keep track of arithmetic triplets.

        // Populate the 'm' map with the count of elements in 'nums'.
        for (int i : nums) {
            m[i]++;
        }

        // Iterate through the elements in 'nums'.
        for (int i : nums) {
            if (m[i + diff] > 0 && m[i + 2 * diff] > 0) {
                count++;  // If an arithmetic triplet is found, increment the count.
            }
        }

        return count;  // Return the count of arithmetic triplets in 'nums'.
    }
};
