class Solution {
public:
    // This function, 'longestCommonPrefix', finds and returns the longest common prefix
    // among a vector of strings 'strs'.

    string longestCommonPrefix(vector<string>& strs) {
        // Initialize an empty string 'ans' to store the longest common prefix.
        string ans = "";

        // Sort the input vector of strings. Sorting helps in finding the common prefix
        // because the common prefix will be found at the beginning of the sorted strings.
        sort(strs.begin(), strs.end());

        // Take the first and last strings from the sorted vector.
        string a = strs[0];  // The first string.
        string b = strs[strs.size() - 1];  // The last string.

        // Compare characters from the first and last strings.
        for (int i = 0; i < a.size(); i++) {
            // If the characters at the same position in both strings are equal,
            // add the character to the 'ans' string.
            if (a[i] == b[i])
                ans += a[i];
            else
                break;  // If a mismatch is found, stop the loop.
        }

        // Return the 'ans' string, which contains the longest common prefix.
        return ans;
    }
};  // End of the Solution class.
