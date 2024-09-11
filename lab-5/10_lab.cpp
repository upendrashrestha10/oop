//write a program to implement up-casting 
#include <iostream>  
using namespace std;  
class Base  
{  
    public:  
        void disp()  
    {  
        cout << " It is the Super function of the Base class ";  
    }  
};  
  
class derive : public Base  
{  
    public:  
        void disp()  
        {  
            cout << "\n It is the derive class function ";  
        }  
      
};  
  
int main ()  
{  
    // create base class pointer  
    Base *b;  
      
    derive d; // create object of derive class  
    b= &d; // assign the obj address to ptr variable  
      
    // create base class's reference  
     Base &ref = d;   
    // Or  
    // get disp() function using pointer variable  
      
    b->disp();  
    return 0;  
} 