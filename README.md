Sure, here is a README file for your C++ Map implementation:

---

# Map Implementation in C++

This project contains a template-based Map class in C++ which is implemented using two custom List objects to store keys and values.

## Features
- **Insert**: Add a new key-value pair to the map. If the key already exists, its value is updated.
- **Remove**: Remove a key-value pair from the map using the key.
- **ValueOf**: Retrieve the value associated with a given key.
- **Print**: Print all key-value pairs in the map.
- **Size**: Get the number of key-value pairs in the map.
- **GetKeys**: Retrieve a list of all keys in the map.
- **GetValues**: Retrieve a list of all values in the map.

## Requirements
- A working C++ compiler
- `list.h` file that contains the implementation of the `List` class template used for storing keys and values.

## Usage
Include the `list.h` file in your project and compile the program using a C++ compiler.

### Example
Here's a simple example of how to use the `Map` class:

```cpp
#include "list.h"
#include "map.h"
#include <iostream>

using namespace std;

int main() {
    Map<string, int> myMap;

    // Inserting key-value pairs
    myMap.insert("apple", 5);
    myMap.insert("banana", 10);
    myMap.insert("cherry", 15);

    // Updating value for an existing key
    myMap.insert("apple", 7);

    // Printing the map
    myMap.print(); // Output: {apple : 7, banana : 10, cherry : 15}

    // Retrieving value by key
    int value = myMap.valueOf("banana");
    cout << "Value of banana: " << value << endl; // Output: Value of banana: 10

    // Removing a key-value pair
    myMap.remove("cherry");

    // Printing the map after removal
    myMap.print(); // Output: {apple : 7, banana : 10}

    return 0;
}
```

### Methods

#### `void insert(T1 key, T2 val)`
Inserts a key-value pair into the map. If the key already exists, updates its value.

#### `void remove(T1 key)`
Removes the key-value pair associated with the given key. Prints an error message if the key is not present.

#### `T2 valueOf(T1 key)`
Returns the value associated with the given key. Prints an error message and returns `NULL` if the key is not present.

#### `void print()`
Prints all the key-value pairs in the map.

#### `int size()`
Returns the number of key-value pairs in the map.

#### `List<T1> getKeys()`
Returns a list of all keys in the map.

#### `List<T2> getValues()`
Returns a list of all values in the map.

## License
This project is licensed under the MIT License.

---

Feel free to customize this README file based on your specific requirements or additional features you might add in the future.
