class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int c = 0;  // Initialize a variable to keep track of the sum of even numbers in the array.
        int ind, val, z;  // Declare variables to store the index, value, and a placeholder.
        vector<int> ans;  // Initialize a vector to store the results.

        // Calculate the initial sum of even numbers in the array.
        for (int i : nums) {
            if (i % 2 == 0) {
                c += i;
            }
        }

        // Iterate through the queries.
        for (int i = 0; i < queries.size(); i++) {
            ind = queries[i][1];  // Get the index from the query.
            val = queries[i][0];  // Get the value from the query.

            // Check if the element at the given index will become even after the query.
            if ((nums[ind] + val) % 2 == 0) {
                // If the element is initially even, update the sum by adding the value.
                if (nums[ind] % 2 == 0) {
                    c += val;
                }
                // If the element is initially odd, update the sum by adding the value and the element itself.
                else {
                    c += val + nums[ind];
                }
            } else {
                // If the element at the given index will become odd after the query and it's initially even,
                // subtract the element from the sum.
                if (nums[ind] % 2 == 0) {
                    c -= nums[ind];
                }
            }

            // If the sum is 0, push 0 to the result vector; otherwise, push the updated sum.
            if (c == 0) {
                ans.push_back(0);
            } else {
                ans.push_back(c);
            }

            // Update the array with the new value based on the query.
            nums[ind] += val;
        }

        return ans;  // Return the vector containing the results after each query.
    }
};
