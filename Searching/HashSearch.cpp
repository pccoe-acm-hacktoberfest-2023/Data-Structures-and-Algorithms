#include <iostream>
#include <unordered_map>

int main() {
    // Create an unordered map as a hash table
    std::unordered_map<int, std::string> hashMap;

    // Insert key-value pairs into the hash table
    hashMap[42] = "Hello, World";
    hashMap[7] = "C++ is fun";
    hashMap[99] = "Hashing Example";

    // Search for a specific key
    int keyToSearch = 7;
    auto it = hashMap.find(keyToSearch);

    // Check if the key was found
    if (it != hashMap.end()) {
        std::cout << "Key " << keyToSearch << " found with value: " << it->second << std::endl;
    } else {
        std::cout << "Key " << keyToSearch << " not found." << std::endl;
    }

    return 0;
}
