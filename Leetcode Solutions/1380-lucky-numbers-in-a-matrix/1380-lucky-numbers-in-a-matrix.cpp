class Solution {
public:
    // This function, 'luckyNumbers', finds and returns the "lucky" numbers in a given matrix.
    // A lucky number is defined as an element that is both the minimum in its row and the maximum
    // in its column within the matrix.

    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        // Initialize variables: 'min' to track the column index of the current minimum in a row,
        // 'ans' to store the lucky numbers, and 'islucky' to track if a number is lucky.
        int min = 0;
        vector<int> ans;
        bool islucky;

        // Iterate through the rows of the matrix.
        for (int i = 0; i < matrix.size(); i++) {
            islucky = true;

            // Find the column index ('min') of the minimum element in the current row.
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][min] > matrix[i][j]) {
                    min = j;
                }
            }

            // Check if the current minimum element in the row is also the maximum in its column.
            for (int j = 0; j < matrix.size(); j++) {
                if (matrix[i][min] < matrix[j][min]) {
                    islucky = false;
                }
            }

            // If the current element is a lucky number, add it to the 'ans' vector.
            if (islucky)
                ans.push_back(matrix[i][min]);
        }

        // Return the vector 'ans' containing the lucky numbers in the matrix.
        return ans;
    }
};  // End of the Solution class.
