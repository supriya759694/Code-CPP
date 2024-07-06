#include <iostream>
#include <stdexcept>

class Array {
private:
    int* arr;
    int size;

public:
    // Constructor to initialize the array
    Array(int initialSize) {
        size = initialSize;
        arr = new int[size];
    }

    // Destructor to free the dynamically allocated memory
    ~Array() {
        delete[] arr;
    }

    // Access an element by index
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of bounds");
        }
        return arr[index];
    }

    // Get the size or length of the array
    int getSize() const {
        return size;
    }

    // Insert an element at a specific position
    void insert(int index, int value) {
        if (index < 0 || index > size) {
            throw std::out_of_range("Index out of bounds");
        }
        int* newArray = new int[size + 1];
        for (int i = 0; i < index; ++i) {
            newArray[i] = arr[i];
        }
        newArray[index] = value;
        for (int i = index; i < size; ++i) {
            newArray[i + 1] = arr[i];
        }
        delete[] arr;
        arr = newArray;
        size++;
    }

    // Delete an element from a specific position
    void remove(int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of bounds");
        }
        int* newArray = new int[size - 1];
        for (int i = 0; i < index; ++i) {
            newArray[i] = arr[i];
        }
        for (int i = index + 1; i < size; ++i) {
            newArray[i - 1] = arr[i];
        }
        delete[] arr;
        arr = newArray;
        size--;
    }

    // Linear search for an element
    int linearSearch(int value) const {
        for (int i = 0; i < size; ++i) {
            if (arr[i] == value) {
                return i;
            }
        }
        return -1;  // Element not found
    }

    // Display the elements of the array
    void display() const {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Array arr(5);  // Creating an Array object of size 5

    // Initializing elements
    for (int i = 0; i < arr.getSize(); ++i) {
        arr[i] = i + 1;
    }

    // Accessing and modifying elements by index
    std::cout << "Element at index 2: " << arr[2] << std::endl;
    arr[1] = 6;  // Modifying the second element
    std::cout << "Modified array: ";
    arr.display();

    // Finding the length or size of the array
    std::cout << "Length of the array: " << arr.getSize() << std::endl;

    // Inserting an element at a specific position
    arr.insert(2, 7);  // Inserting 7 at index 2
    std::cout << "Array after insertion: ";
    arr.display();

    // Deleting an element from a specific position
    arr.remove(3);  // Removing element at index 3
    std::cout << "Array after deletion: ";
    arr.display();

    // Searching for an element in the array (linear search)
    int search_element = 4;
    int search_result = arr.linearSearch(search_element);
    if (search_result != -1) {
        std::cout << search_element << " found at index " << search_result << std::endl;
    } else {
        std::cout << search_element << " not found in the array" << std::endl;
    }

    return 0;
}

