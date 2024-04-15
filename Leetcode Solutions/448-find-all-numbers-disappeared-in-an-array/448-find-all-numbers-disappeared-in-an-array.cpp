class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> m;  // Create an unordered map to store counts of elements.
        vector<int> disappeared;  // Create a vector to store disappeared numbers.

        // Iterate through the 'nums' vector and count occurrences of each element.
        for(int i : nums) {
            m[i]++;
        }

        // Iterate from 1 to the size of 'nums' to find disappeared numbers.
        for(int i = 1; i <= nums.size(); i++) {
            if(m[i] == 0) {
                disappeared.push_back(i);  // If the element is not found, add it to the 'disappeared' vector.
            }
        }

        return disappeared;  // Return the vector containing disappeared numbers.
    }
};
