class Solution {
public:
    // This function, 'generate', generates Pascal's Triangle up to 'n' rows.
    // It returns a 2D vector containing the rows of Pascal's Triangle.

    vector<vector<int>> generate(int n) {
        // Create a 2D vector 'ans' with 'n' rows to store the result.
        vector<vector<int>> ans(n);

        // Iterate through each row of Pascal's Triangle.
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                // Check if the current element is on the left edge or the right edge of the row.
                if (j == 0 || j == i) {
                    // If it's on the edge, the element should be 1.
                    ans[i].push_back(1);
                } else {
                    // Calculate the current element by summing the elements from the previous row
                    // at positions 'j' and 'j-1'. This represents the addition of the two elements
                    // directly above the current element in Pascal's Triangle.
                    ans[i].push_back(ans[i - 1][j] + ans[i - 1][j - 1]);
                }
            }
        }
        
        // Return the 2D vector 'ans' representing Pascal's Triangle.
        return ans;
    }
};  // End of the Solution class.
