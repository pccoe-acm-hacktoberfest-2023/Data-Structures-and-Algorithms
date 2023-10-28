class MyHashMap {
public:
    vector<int> m; // Vector to store values
    int size;     // Size of the HashMap

    MyHashMap() {
        size = 1e6 + 1;   // Initialize the size to a large value
        m.resize(size);   // Resize the vector to accommodate the specified size
        fill(m.begin(), m.end(), -1);  // Fill the vector with -1 to indicate empty slots
    }

    void put(int key, int value) {
        m[key] = value;  // Store the value in the vector at the corresponding key
    }

    int get(int key) {
        return m[key];  // Retrieve the value from the vector using the key
    }

    void remove(int key) {
        m[key] = -1;  // Remove the value by setting it to -1 in the vector
    }
};
