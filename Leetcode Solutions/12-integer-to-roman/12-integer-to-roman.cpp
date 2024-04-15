class Solution {
public:
    // This function, 'intToRoman', converts an integer 'num' to its Roman numeral representation.
    // It uses an array of integer values ('nums') and their corresponding Roman numeral symbols
    // ('letters') to perform the conversion and returns the resulting Roman numeral as a string.

    string intToRoman(int num) {
        // Arrays 'nums' and 'letters' are used to map integer values to their Roman numeral symbols.
        int nums[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string letters[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        // Initialize an empty string 's' to store the Roman numeral representation.
        string s = "";
        
        // Loop through the 'nums' array to convert the integer 'num' to Roman numerals.
        for (int i = 0; i < 13; i++) {
            // While the current integer value 'nums[i]' can be subtracted from 'num',
            // subtract it and append the corresponding Roman numeral symbol to the result string 's'.
            while (num >= nums[i]) {
                num -= nums[i];
                s += letters[i];
            }
        }
        
        // Return the final Roman numeral representation as a string.
        return s;
    }
};  // End of the Solution class.
