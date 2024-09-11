//write a program that throws and handles exceptions in following situation 
//d) trying arithmentic operation with non numeric data
#include <iostream>
#include <sstream>  // For std::istringstream
#include <stdexcept> // For std::invalid_argument

using namespace std;

// Function to convert a string to a float and perform an arithmetic operation
float performArithmeticOperation(const string& input1, const string& input2, char op) {
    float num1, num2;

    // Convert string inputs to float
    istringstream iss1(input1);
    istringstream iss2(input2);
    
    if (!(iss1 >> num1) || !(iss2 >> num2)) {
        throw invalid_argument("Error: Non-numeric data provided");
    }

    // Perform the arithmetic operation based on the operator
    switch (op) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/':
            if (num2 == 0) {
                throw runtime_error("Error: Division by zero");
            }
            return num1 / num2;
        default:
            throw invalid_argument("Error: Unsupported operation");
    }
}

int main() {
    string input1, input2;
    char op;

    cout << "Enter first number: ";
    cin >> input1;
    cout << "Enter second number: ";
    cin >> input2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    try {
        float result = performArithmeticOperation(input1, input2, op);
        cout << "Result: " << result << endl;
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}
