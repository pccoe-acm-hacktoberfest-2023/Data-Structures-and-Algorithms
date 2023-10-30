class Solution {
public:
    int lengthOfLastWord(string s) {
        unsigned int c = 0;  // Initialize a variable to count characters in the last word.

        // Iterate through the string from right to left.
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                c++;  // Increment the character count for non-space characters.
            }
            
            // If a space character is encountered and there are already some characters counted,
            // it means the last word has ended, so return the character count.
            if (s[i] == ' ' && c != 0) {
                return c;
            }
        }

        return c;  // Return the character count for the last word (or 0 if no word is found).
    }
};
