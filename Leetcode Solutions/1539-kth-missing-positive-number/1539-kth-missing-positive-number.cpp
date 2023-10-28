class Solution {
public:
    // This function, 'findKthPositive', finds and returns the kth positive integer that is missing
    // from a given array 'arr' of positive integers. The function uses a simple iterative approach.

    int findKthPositive(vector<int>& arr, int k) {
        // Iterate through the elements of the 'arr' and adjust 'k' for each element found in the array.
        for (int i : arr) {
            if (i <= k) {
                k++;  // Increment 'k' as we've found an element that's not missing.
            }
        }

        // 'k' will now represent the kth missing positive integer.
        return k;
    }
};
