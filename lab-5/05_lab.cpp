//write a program to implement to show ambiguity in inheritance and implement the solution for this 
#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout<<"This is  class A "<<endl;
    }
};
class B
{
    public:
    void show()
    {
        cout<<"This is class B"<<endl;
    }

};
class C : public A, public B
{
 public:
 void show()
 {
    A::show();
    B::show();
 }
};
int main()
{
    C c;
    c.show();
    // c.A ::show();
    // c.B::show();
    return 0;
}