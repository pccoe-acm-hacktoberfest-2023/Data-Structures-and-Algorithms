class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();  // Get the size of the square matrix.

        // Transpose the matrix by swapping elements across the main diagonal.
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse each row of the transposed matrix to achieve a 90-degree clockwise rotation.
        for (int i = 0; i < n; ++i) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
