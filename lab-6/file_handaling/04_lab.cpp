//write a program to read data from a text file by using read() function
#include<iostream>
#include<fstream>
using namespace std;
struct employee
{
    int id;
    int salary;
    char name[30];
};
int main()
{
    employee e;
    ifstream fin;
    fin.open("employee.dat");
    fin.read((char *)&e,sizeof(employee));
    cout<<"Employee ID: "<<e.id<<endl;
    cout<<"Employee name: "<<e.name<<endl;
    cout<<"Salary: "<<e.salary<<endl;
    fin.close();
    return 0;
    
}