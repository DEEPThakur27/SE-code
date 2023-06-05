#include <iostream>
#include <list>

using namespace std;

class HashTable {
private:
    int size;
    list<pair<int, int>>* table;
    int hash_function(int key) {
        return key % size;
    }
public:
    HashTable(int size) {
        this->size = size;
        table = new list<pair<int, int>>[size];
    }
    void insert(int key, int value) {
        int hash_value = hash_function(key);
        for (auto& pair : table[hash_value]) {
            if (pair.first == key) {
                pair.second = value;
                return;
            }
        }
        table[hash_value].push_back({key, value});
    }
    int find(int key) {
        int hash_value = hash_function(key);
        for (auto& pair : table[hash_value]) {
            if (pair.first == key) {
                return pair.second;
            }
        }
        throw "Key not found";
    }
    void remove(int key) {
        int hash_value = hash_function(key);
        for (auto it = table[hash_value].begin(); it != table[hash_value].end(); ++it) {
            if (it->first == key) {
                table[hash_value].erase(it);
                return;
            }
        }
        throw "Key not found";
    }
    ~HashTable() {
        delete[] table;
    }
};

int main() {
    HashTable ht(10);
    ht.insert(5, 100);
    ht.insert(15, 200);
    ht.insert(25, 300);
    try {
        cout << "Inserting: "<< ht.find(5) << endl; // Output: 100
        cout << "Inserting: "<< ht.find(15) << endl; // Output: 200
        cout << "Inserting: "<< ht.find(25) << endl; // Output: 300
        cout << "Inserting: "<< ht.find(35) << endl; // Throws "Key not found" exception
    } catch (const char* message) {
        cerr << message << endl;
    }
    cout<< "Removing 15"<<endl;
    ht.remove(15);
    try {
        cout << ht.find(15) << endl; // Throws "Key not found" exception
    } catch (const char* message) {
        cerr << message << endl;
    }
    return 0;
}

#include <iostream>
#include <list>

using namespace std;

class HashTable {
private:
    int size;
    list<pair<int, int>>* table;
    int hash_function(int key) {
        return key % size;
    }
public:
    HashTable(int size) {
        this->size = size;
        table = new list<pair<int, int>>[size];
    }
    void insert(int key, int value) {
        int hash_value = hash_function(key);
        for (auto& pair : table[hash_value]) {
            if (pair.first == key) {
                pair.second = value;
                return;
            }
        }
        table[hash_value].push_back({key, value});
    }
    int find(int key) {
        int hash_value = hash_function(key);
        for (auto& pair : table[hash_value]) {
            if (pair.first == key) {
                return pair.second;
            }
        }
        throw "Key not found";
    }
    void remove(int key) {
        int hash_value = hash_function(key);
        for (auto it = table[hash_value].begin(); it != table[hash_value].end(); ++it) {
            if (it->first == key) {
                table[hash_value].erase(it);
                return;
            }
        }
        throw "Key not found";
    }
    ~HashTable() {
        delete[] table;
    }
};

int main() {
    HashTable ht(10);
    ht.insert(5, 100);
    ht.insert(15, 200);
    ht.insert(25, 300);
    try {
        cout << "Inserting: "<< ht.find(5) << endl; // Output: 100
        cout << "Inserting: "<< ht.find(15) << endl; // Output: 200
        cout << "Inserting: "<< ht.find(25) << endl; // Output: 300
        cout << "Inserting: "<< ht.find(35) << endl; // Throws "Key not found" exception
    } catch (const char* message) {
        cerr << message << endl;
    }
    cout<< "Removing 15"<<endl;
    ht.remove(15);
    try {
        cout << ht.find(15) << endl; // Throws "Key not found" exception
    } catch (const char* message) {
        cerr << message << endl;
    }
    return 0;
}

#include <iostream>
#include <list>

using namespace std;

class HashTable {
private:
    int size;
    list<pair<int, int>>* table;
    int hash_function(int key) {
        return key % size;
    }
public:
    HashTable(int size) {
        this->size = size;
        table = new list<pair<int, int>>[size];
    }
    void insert(int key, int value) {
        int hash_value = hash_function(key);
        for (auto& pair : table[hash_value]) {
            if (pair.first == key) {
                pair.second = value;
                return;
            }
        }
        table[hash_value].push_back({key, value});
    }
    int find(int key) {
        int hash_value = hash_function(key);
        for (auto& pair : table[hash_value]) {
            if (pair.first == key) {
                return pair.second;
            }
        }
        throw "Key not found";
    }
    void remove(int key) {
        int hash_value = hash_function(key);
        for (auto it = table[hash_value].begin(); it != table[hash_value].end(); ++it) {
            if (it->first == key) {
                table[hash_value].erase(it);
                return;
            }
        }
        throw "Key not found";
    }
    ~HashTable() {
        delete[] table;
    }
};

int main() {
    HashTable ht(10);
    ht.insert(5, 100);
    ht.insert(15, 200);
    ht.insert(25, 300);
    try {
        cout << "Inserting: "<< ht.find(5) << endl; // Output: 100
        cout << "Inserting: "<< ht.find(15) << endl; // Output: 200
        cout << "Inserting: "<< ht.find(25) << endl; // Output: 300
        cout << "Inserting: "<< ht.find(35) << endl; // Throws "Key not found" exception
    } catch (const char* message) {
        cerr << message << endl;
    }
    cout<< "Removing 15"<<endl;
    ht.remove(15);
    try {
        cout << ht.find(15) << endl; // Throws "Key not found" exception
    } catch (const char* message) {
        cerr << message << endl;
    }
    return 0;
}

#include <iostream>
#include <list>

using namespace std;

class HashTable {
private:
    int size;
    list<pair<int, int>>* table;
    int hash_function(int key) {
        return key % size;
    }
public:
    HashTable(int size) {
        this->size = size;
        table = new list<pair<int, int>>[size];
    }
    void insert(int key, int value) {
        int hash_value = hash_function(key);
        for (auto& pair : table[hash_value]) {
            if (pair.first == key) {
                pair.second = value;
                return;
            }
        }
        table[hash_value].push_back({key, value});
    }
    int find(int key) {
        int hash_value = hash_function(key);
        for (auto& pair : table[hash_value]) {
            if (pair.first == key) {
                return pair.second;
            }
        }
        throw "Key not found";
    }
    void remove(int key) {
        int hash_value = hash_function(key);
        for (auto it = table[hash_value].begin(); it != table[hash_value].end(); ++it) {
            if (it->first == key) {
                table[hash_value].erase(it);
                return;
            }
        }
        throw "Key not found";
    }
    ~HashTable() {
        delete[] table;
    }
};

int main() {
    HashTable ht(10);
    ht.insert(5, 100);
    ht.insert(15, 200);
    ht.insert(25, 300);
    try {
        cout << "Inserting: "<< ht.find(5) << endl; // Output: 100
        cout << "Inserting: "<< ht.find(15) << endl; // Output: 200
        cout << "Inserting: "<< ht.find(25) << endl; // Output: 300
        cout << "Inserting: "<< ht.find(35) << endl; // Throws "Key not found" exception
    } catch (const char* message) {
        cerr << message << endl;
    }
    cout<< "Removing 15"<<endl;
    ht.remove(15);
    try {
        cout << ht.find(15) << endl; // Throws "Key not found" exception
    } catch (const char* message) {
        cerr << message << endl;
    }
    return 0;
}

