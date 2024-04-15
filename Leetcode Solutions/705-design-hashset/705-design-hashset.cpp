class MyHashSet {
public:
    vector<list<int>> v; // Vector of lists to store integers
    int size;           // Size of the HashSet

    MyHashSet() {
        size = 1e6;       // Initialize the size to a large value
        v.resize(size);   // Resize the vector to accommodate the specified size
    }

    int hash(int key) {
        return key % 11;   // Simple hash function to map keys to an index in the vector
    }

    list<int>::iterator search(int key) {
        int i = hash(key);  // Get the index based on the hash function
        return find(v[i].begin(), v[i].end(), key); // Search for the key in the corresponding list
    }

    void add(int key) {
        if (contains(key)) return;  // Check if the key already exists in the HashSet
        int i = hash(key);         // Get the index based on the hash function
        v[i].push_back(key);       // Add the key to the corresponding list
    }

    void remove(int key) {
        if (!contains(key)) return;  // Check if the key exists before removing it
        int i = hash(key);           // Get the index based on the hash function
        v[i].erase(search(key));     // Remove the key from the corresponding list
    }

    bool contains(int key) {
        int i = hash(key);  // Get the index based on the hash function
        if (search(key) != v[i].end()) return true;  // Check if the key is found in the list
        return false;
    }
};
