//write a program that throws and handles exceptions in following situation
//b) array index out of bond
#include <iostream>
#include <stdexcept> // For std::out_of_range exception

using namespace std;

// Function to safely access array elements with bounds checking
int safeAccess(int* arr, int index, int size) {
    if (index < 0 || index >= size) {
        throw out_of_range("Array index out of bounds");
    }
    return arr[index];
}

int main() {
    const int size = 5; // Size of the array
    int arr[size] = {1, 2, 3, 4, 5};

    try {
        // Accessing within bounds
        cout << "arr[0] is " << safeAccess(arr, 0, size) << endl;

        // Attempting to access out of bounds
        cout << "arr[10] is " << safeAccess(arr, 10, size) << endl;
        
        // Modification of out-of-bounds element would be handled in safeAccess if necessary
        // Safe modification requires bounds checking
        safeAccess(arr, 10, size) = 11;

        // Printing modified value - Note: This line won't execute due to exception
        cout << "arr[10] is " << arr[10] << endl;
    } 
    catch (const out_of_range& e) {
        // Catching and handling the out_of_range exception
        cout << "Exception caught: " << e.what() << endl;
    }
    catch (...) {
        // Catch-all for any other exceptions
        cout << "An unexpected exception occurred." << endl;
    }

    return 0;
}



