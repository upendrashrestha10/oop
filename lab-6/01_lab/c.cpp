//write a program that throws and handles exceptions in following situation 
//c) finding square root of negative number
#include <iostream>
#include <cmath>
#include <stdexcept> // For std::runtime_error

using namespace std;

// Function to calculate the square root
float squareRoot(float num) {
    if (num < 0) {
        // Throwing an exception for negative numbers
        throw runtime_error("Error: number must not be negative");
    }
    return sqrt(num); // Calculate and return the square root
}

int main() {
    float n;
    cout << "Enter a number: ";
    cin >> n;

    try {
        // Call the squareRoot function
        float result = squareRoot(n);
        cout << "The square root of " << n << " is " << result << endl;
    } catch (runtime_error& e) {
        // Handle the exception
        cout << e.what() << endl;
    }

    return 0;
}
