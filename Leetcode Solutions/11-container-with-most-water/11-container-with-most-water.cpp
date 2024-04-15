class Solution {
public:
    // This function, 'maxArea', takes a vector of integers 'h' as input, where 'h'
    // represents the heights of vertical lines. It calculates and returns the maximum
    // area between two lines that can be formed by selecting any two vertical lines.

    int maxArea(vector<int>& h) {
        // Initialize variables: 'ans' to store the maximum area, 'l' for the left pointer,
        // 'r' for the right pointer, and 'area' for the current area being calculated.
        int ans = 0, l = 0, r = h.size() - 1, area;
        
        // Use a while loop to traverse the array and calculate the maximum area.
        while (l < r) {
            if (h[l] < h[r]) {
                // Calculate the area using the height of the left line ('h[l]')
                // and the width between the lines ('r - l'). Then, move the left pointer 'l'.
                area = h[l] * (r - l);
                l++;
            }
            else {
                // Calculate the area using the height of the right line ('h[r]')
                // and the width between the lines ('r - l'). Then, move the right pointer 'r'.
                area = h[r] * (r - l);
                r--;
            }
            
            // Update 'ans' with the maximum value between 'ans' and the current 'area'.
            ans = ans > area ? ans : area;
        }
        
        // Return the maximum area found.
        return ans;
    }
};  // End of the Solution class.
