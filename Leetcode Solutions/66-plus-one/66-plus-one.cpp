class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // Iterate through the digits array from right to left.
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] != 9) {
                // If the current digit is not 9, simply increment it and return the result.
                digits[i]++;
                return digits;
            } else {
                // If the current digit is 9, set it to 0 (carry over) and continue with the next digit.
                digits[i] = 0;
            }
        }
        
        // If all digits were 9 (e.g., 999...), we need to add a new digit 1 at the beginning of the array.
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
