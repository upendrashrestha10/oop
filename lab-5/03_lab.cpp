//write a program to implement constructor and ditructor inheritance and show their order of execution
#include <iostream>

// Base class
class Base {
public:
    // Constructor of the Base class
    Base() {
        std::cout << "Base class constructor called" << std::endl;
    }

    // Destructor of the Base class
    virtual ~Base() {
        std::cout << "Base class destructor called" << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Constructor of the Derived class
    Derived() {
        std::cout << "Derived class constructor called" << std::endl;
    }

    // Destructor of the Derived class
    ~Derived() override {
        std::cout << "Derived class destructor called" << std::endl;
    }
};

int main() {
    std::cout << "Creating Derived object..." << std::endl;
    Derived obj;
    std::cout << "Derived object created" << std::endl;

    // The destructor will be called automatically when the object goes out of scope
    return 0;
}
