//write a program to implement multilevel inheritance
#include<iostream>
using namespace std;
class student
{
    int id;
    char name[20];
    public:
    void getstudent()
    {
        cout<<"enter student id and name: ";
        cin>>id>>name;
    }
    void displaystudent()
    {
        cout<<"Name: "<<name<<endl<<"ID: "<<id<<endl;
    }
};
class marks : public student
{
    int tmarks;
    public:
    void getmarks()
    {
        cout<<"enter total marks: ";
        cin>>tmarks;
    }
    void displaymarks()
    {
        cout<<"Total Marks: "<<tmarks<<endl;
    }
};
class stream:public marks
{
    char stream[10];
    public:
    void getdata()
    {
        getstudent();
        getmarks();
        cout<<"enter stream: ";
        cin>>stream;
    }
    void display()
    {
        displaystudent();
        displaymarks();
        cout<<"Stream: "<<stream<<endl;
    }
};
int main()
{
    stream s;
    s.getdata();
    cout<<"....result....."<<endl;
    s.display();
    return 0;
}