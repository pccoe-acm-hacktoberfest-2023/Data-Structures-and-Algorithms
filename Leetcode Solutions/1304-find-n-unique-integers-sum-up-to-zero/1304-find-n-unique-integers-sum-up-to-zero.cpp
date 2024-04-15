class Solution {
public:
    // This function, 'sumZero', generates an array of 'n' integers in which the sum of all elements is zero.
    // It returns a vector containing 'n' integers that satisfy this condition.

    vector<int> sumZero(int n) {
        // Initialize an empty vector 'ans' to store the generated integers.
        vector<int> ans;
        
        // Calculate the number of positive and negative integers to be added.
        int half = n / 2;
        
        // To make the sum zero, we add an equal number of positive and negative integers.
        while (half > 0) {
            ans.push_back(half);  // Add a positive integer.
            ans.push_back(-half);  // Add its corresponding negative integer.
            half--;
        }
        
        // If 'n' is odd, add a single '0' to the vector to ensure the sum remains zero.
        if (n % 2 != 0)
            ans.push_back(0);
        
        // Return the vector 'ans' containing the integers with a zero sum.
        return ans;
    }
};  // End of the Solution class.
