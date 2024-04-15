class Solution {
public:
    // This function, 'firstUniqChar', finds and returns the index of the first non-repeating character in the input string 's'.

    int firstUniqChar(string s) {
        map<char, int> m;  // Create a map to store the frequency of each character in 's'.

        // Populate the map 'm' with character frequencies from the string 's'.
        for (char i : s) {
            m[i]++;
        }

        // Iterate through the characters of the string 's' to find the first non-repeating character.
        for (int i = 0; i < s.size(); i++) {
            if (m[s[i]] == 1) {
                return i;  // If the character occurs only once, return its index as the first non-repeating character.
            }
        }

        // If no non-repeating character is found, return -1 to indicate that there are no non-repeating characters in the string.
        return -1;
    }
};
