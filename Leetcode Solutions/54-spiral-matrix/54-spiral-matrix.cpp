class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();    // Get the number of rows in the matrix.
        int cols = matrix[0].size(); // Get the number of columns in the matrix.
        int row = 0;                 // Initialize the starting row.
        int col = 0;                 // Initialize the starting column.
        vector<int> output;         // Create a vector to store the elements in spiral order.

        while (row < rows && col < cols) {
            // Traverse the top row from left to right.
            for (int i = col; i < cols; i++) {
                output.push_back(matrix[row][i]);
            }
            row++; // Move to the next row.

            // Traverse the rightmost column from top to bottom.
            for (int i = row; i < rows; i++) {
                output.push_back(matrix[i][cols - 1]);
            }
            cols--; // Decrease the column count.

            // Check if there are remaining rows and columns.
            if (row < rows) {
                // Traverse the bottom row from right to left.
                for (int i = cols - 1; i >= col; i--) {
                    output.push_back(matrix[rows - 1][i]);
                }
                rows--; // Decrease the row count.
            }

            // Check if there are remaining columns.
            if (col < cols) {
                // Traverse the leftmost column from bottom to top.
                for (int i = rows - 1; i >= row; i--) {
                    output.push_back(matrix[i][col]);
                }
                col++; // Move to the next column.
            }
        }

        return output; // Return the elements in spiral order.
    }
};
