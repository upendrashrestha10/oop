#include <iostream>
using namespace std;

class student {
private:
    char name[30];
    int age;
public:
    void getdata() {
        cout << "Enter name and age of student: ";
        cin >> name >> age;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class course : public student {
private:
    char courseName[30];
public:
    void getdata() {
        student::getdata(); // Call the base class getdata
        cout << "Enter course: ";
        cin >> courseName;
    }

    void display() const {
        student::display(); // Call the base class display
        cout << "Course: " << courseName << endl;
    }
};

int main() {
    course c;
    c.getdata(); // Get all data (student info + course)
    cout << "....result..." << endl;
    c.display(); // Display all data (student info + course)
    return 0;
}
