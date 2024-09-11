//write a program to restrict the exception that can be thrown from a function
#include<iostream>
using namespace std;
void test(int x) throw(int,double)
{
    if(x==0)
    throw x;
    if (x==1)
    throw 1.0;
    if (x==2)
    throw "a";
}
int main()
{
    int n;
    cout<<"enter a number{0,1,2}: ";
    cin>>n;
    try
    {
        {
            test (n);
        }
    }
    catch(int m)
    {
        cout<<"caught an integer";
    }
    catch(double d)
    {
        cout<<"caught a double";
    }
    catch(char c)
    {
        cout<<"caught a character";
    }
    return 0;
}