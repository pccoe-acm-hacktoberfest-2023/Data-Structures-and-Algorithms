#include <map>

class Solution {
public:
    // This function, 'reverseVowels', reverses the vowels in the input string 's' while keeping the
    // consonants and non-alphabet characters in their original positions. It returns the modified string.

    string reverseVowels(string s) {
        int l = 0;              // Initialize a pointer 'l' to the start of the string.
        int h = s.size() - 1;   // Initialize a pointer 'h' to the end of the string.
        char x;                 // Initialize a temporary variable 'x' to swap vowels.
        bool x1, x2;            // Initialize boolean flags 'x1' and 'x2' to check if characters at 'l' and 'h' are vowels.

        while (l < h) {
            x1 = false;  // Initialize 'x1' to false, indicating that the character at 'l' is not a vowel.
            x2 = false;  // Initialize 'x2' to false, indicating that the character at 'h' is not a vowel.

            // Check if the character at 'l' is a vowel (lowercase or uppercase).
            if (s[l] == 'a' || s[l] == 'e' || s[l] == 'o' || s[l] == 'i' || s[l] == 'u' ||
                s[l] == 'A' || s[l] == 'E' || s[l] == 'O' || s[l] == 'I' || s[l] == 'U') {
                x1 = true;  // Set 'x1' to true if the character at 'l' is a vowel.
            }

            // Check if the character at 'h' is a vowel (lowercase or uppercase).
            if (s[h] == 'a' || s[h] == 'e' || s[h] == 'i' || s[h] == 'o' || s[h] == 'u' ||
                s[h] == 'A' || s[h] == 'E' || s[h] == 'I' || s[h] == 'O' || s[h] == 'U') {
                x2 = true;  // Set 'x2' to true if the character at 'h' is a vowel.
            }

            if (!x1) {
                l++;  // If 'x1' is false, increment 'l' to move to the next character.
            }
            if (!x2) {
                h--;  // If 'x2' is false, decrement 'h' to move to the previous character.
            }

            if (x1 && x2) {
                // If both 'x1' and 'x2' are true (indicating that both 'l' and 'h' are vowels),
                // swap the vowels at 'l' and 'h' positions and move 'l' and 'h' accordingly.
                x = s[l];
                s[l] = s[h];
                s[h] = x;
                l++;
                h--;
            }
        }

        // Return the modified string where vowels have been reversed.
        return s;
    }
};
