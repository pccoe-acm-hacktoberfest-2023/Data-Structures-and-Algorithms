class Solution {
public:
    bool isPalindrome(int x) {
        // Check if x is negative, which can't be a palindrome.
        if (x < 0) {
            return false;
        }
        
        // Initialize variables for reversing the number.
        unsigned long int rev = 0;  // Stores the reversed number.
        unsigned long int x1 = x;  // Make a copy of x to avoid modifying the original number.
        int n;  // Variable to store the last digit.

        // Reverse the digits of x1.
        while (x1) {
            n = x1 % 10;  // Get the last digit.
            rev = rev * 10 + n;  // Reverse the number.
            x1 -= n;  // Remove the last digit.
            x1 /= 10;  // Move to the next digit.
        }

        // Check if the reversed number matches the original number.
        if (rev == x) {
            return true;  // x is a palindrome.
        }
        
        return false;  // x is not a palindrome.
    }
};
