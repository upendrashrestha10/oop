//write a program to write data in a text file using write() function
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
    ofstream fout;
    fout.open("employee.dat");
    cout<<"Enter employee ID: ";
    cin>>e.id;
    cout<<"Enter employee name: ";
    cin>>e.name;
    cout<<"Enter salary: ";
    cin>>e.salary;
    fout.write((char *)&e,sizeof(employee));
    cout<<"DONE";
    fout.close();
    return 0;
    
}