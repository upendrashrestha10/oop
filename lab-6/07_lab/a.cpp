//write a program to implement class template specialization
#include <iostream>
#include <string>
using namespace std;

// Primary template
template <typename T>
class Printer {
public:
    void print( T & value) {
      cout << "Generic print: " << value << endl;
    }
};

// Specialization for int
template <>
class Printer<int> {
public:
    void print( int & value) {
        cout << "Integer print: " << value << endl;
    }
};

// Specialization for std::string
template <>
class Printer<string> {
public:
    void print(string &  value) {
        cout << "String print: \"" << value << "\"" <<endl;
    }
};

int main() {
    Printer<double> doublePrinter;
    Printer<int> intPrinter;
    Printer<string> stringPrinter;

    doublePrinter.print(3.14);        // Uses primary template
    intPrinter.print(42);            // Uses specialized template for int
    stringPrinter.print("Hello!");   // Uses specialized template for std::string

    return 0;
}
