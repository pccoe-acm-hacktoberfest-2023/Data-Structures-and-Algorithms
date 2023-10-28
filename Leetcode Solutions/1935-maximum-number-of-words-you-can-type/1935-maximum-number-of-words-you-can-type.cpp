class Solution {
public:
    // This function, 'canBeTypedWords', counts the number of words in a given 'text' string
    // that can be typed without using any letters present in the 'brokenLetters' string.

    int canBeTypedWords(string text, string brokenLetters) {
        bool isbroken = false; // Flag to track if a word contains broken letters.
        int ans = 0; // Initialize the count of words that can be typed.
        map<char, int> m; // Create a map to store the count of broken letters.

        // Populate the 'm' map with the count of each character from 'brokenLetters'.
        for (char x : brokenLetters) {
            m[x]++;
        }

        // Iterate through the characters in the 'text' string.
        for (int i = 0; i < text.size(); i++) {
            if (m[text[i]] > 0) {
                isbroken = true; // Set the flag to true if the current character is in 'brokenLetters'.
            }

            // Check if the current character is a space (end of a word) or the last character in the 'text' string.
            if (text[i] == ' ' || i == text.size() - 1) {
                if (!isbroken) {
                    ans++; // If the word doesn't contain broken letters, increment the count.
                }
                isbroken = false; // Reset the flag for the next word.
            }
        }

        // Return the count of words that can be typed without broken letters.
        return ans;
    }
};
