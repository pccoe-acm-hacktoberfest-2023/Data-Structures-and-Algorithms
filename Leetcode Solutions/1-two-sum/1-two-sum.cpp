class Solution {
public:
    // This function takes a vector of integers (nums) and an integer (target) as input.
    // It finds and returns a vector containing the indices of two numbers from nums
    // that add up to the given target.

    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a map to store the elements of nums and their corresponding indices.
        map<int, int> m;
        
        // Iterate through the elements of nums using a for loop.
        for(int i=0; i<nums.size(); i++){
            // Check if the current element nums[i] is present in the map.
            if(m.find(nums[i]) != m.end()){
                // If the current element is found in the map, return a vector
                // containing the indices of the two elements that sum up to the target.
                return vector<int>{m[nums[i]], i};
            }
            
            // Calculate the difference between the target and the current element.
            // Store this difference as the key in the map with the value being the current index.
            m[target - nums[i]] = i;
        }
        
        // If no such pair of elements is found, return the input nums (which may not be
        // very meaningful, but it keeps the return type consistent).
        return nums;
    }
};  // End of the Solution class.
