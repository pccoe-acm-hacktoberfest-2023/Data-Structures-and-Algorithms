class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int x = nums[0];  // Initialize x with the first element of the array.
        
        // Iterate through the array starting from the second element.
        for (int i = 1; i < nums.size(); i++) {
            x ^= nums[i];  // Use XOR to find the unique element.
        }
        
        return x;  // Return the unique element.
    }
};
