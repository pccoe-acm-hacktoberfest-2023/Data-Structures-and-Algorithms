class Solution {
public:
    // This function, 'productExceptSelf', computes the product of all elements in the input vector 'nums'
    // except for the current element. It returns a new vector with the results.

    vector<int> productExceptSelf(vector<int>& nums) {
        int countZeros = 0;  // Initialize a count for zero values.
        int product = 1;     // Initialize a variable to accumulate the product of all non-zero elements.
        int zeroIndex;       // Initialize a variable to store the index of the first zero element.

        // Iterate through the elements in the 'nums' vector.
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                product *= nums[i];  // Multiply non-zero elements to accumulate their product.
            } else {
                countZeros++;       // Increment the count of zero values.
                zeroIndex = i;      // Record the index of the first zero element.
            }
        }

        // If there are more than one zero in the vector, all elements should be set to zero.
        if (countZeros > 1) {
            fill(nums.begin(), nums.end(), 0);
        } else {
            // If there is exactly one zero, set its corresponding element to the accumulated product.
            if (countZeros == 1) {
                fill(nums.begin(), nums.end(), 0);  // Set all elements to zero.
                nums[zeroIndex] = product;          // Set the element at the zero index to the product.
            } else {
                // If there are no zero elements, divide the product by each element to get the result.
                for (int i = 0; i < nums.size(); i++) {
                    nums[i] = product / nums[i];
                }
            }
        }

        return nums;  // Return the vector with the computed product except for the current element.
    }
};
