class Solution {
public:
    // This function, 'isPalindrome', checks whether a given string 's' is a palindrome.
    // A palindrome is a word, phrase, number, or other sequence of characters that reads
    // the same forward and backward. The function returns 'true' if 's' is a palindrome
    // and 'false' otherwise.

    bool isPalindrome(string s) {
        // Initialize two pointers 'l' and 'r' at the beginning and end of the string 's'.
        int l = 0, r = s.size() - 1;

        // Use a while loop to compare characters from both ends of the string.
        while (l < r) {
            // Skip non-alphanumeric characters from the left side.
            if (!isalnum(s[l]))
                l++;
            // Skip non-alphanumeric characters from the right side.
            else if (!isalnum(s[r]))
                r--;
            // If the characters at 'l' and 'r' (ignoring case) are not equal, it's not a palindrome.
            else if (toupper(s[l]) != toupper(s[r]))
                return false;
            // Move both pointers towards the center of the string.
            else {
                l++;
                r--;
            }
        }
        
        // If the loop completes without finding a mismatch, the string is a palindrome.
        return true;
    }
};  // End of the Solution class.
