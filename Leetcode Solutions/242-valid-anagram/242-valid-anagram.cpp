class Solution {
public:
    // This function, 'isAnagram', checks if two input strings, 's' and 't', are anagrams of each other.

    bool isAnagram(string s, string t) {
        // Check if the lengths of the two strings are different; if so, they cannot be anagrams.
        if (s.size() != t.size()) {
            return false;
        }

        map<char, int> m1, m2;  // Create two maps to store character frequencies in 's' and 't'.

        // Populate 'm1' with the character frequencies in string 's'.
        for (char i : s) {
            m1[i]++;
        }

        // Populate 'm2' with the character frequencies in string 't'.
        for (char i : t) {
            m2[i]++;
        }

        // Compare the character frequencies between 's' and 't'. If any character frequency is different,
        // the strings are not anagrams.
        for (char i : s) {
            if (m1[i] != m2[i]) {
                return false;
            }
        }

        // If no differences were found, the strings are anagrams.
        return true;
    }
};
