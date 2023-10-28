class Solution {
public:
    // This function, 'decode', takes a vector of integers 'encoded' and an integer 'first' as input.
    // It decodes the 'encoded' vector and returns the decoded result as a vector of integers.

    vector<int> decode(vector<int>& encoded, int first) {
        // Insert the 'first' element at the beginning of the 'encoded' vector.
        encoded.insert(encoded.begin(), first);

        // Iterate through the 'encoded' vector and apply the XOR operation to decode it.
        for (int i = 1; i < encoded.size(); i++) {
            encoded[i] = encoded[i - 1] ^ encoded[i];
        }

        // Return the decoded vector.
        return encoded;
    }
};
