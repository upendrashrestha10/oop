#include<iostream>
using namespace std;
class base
{
private:
    int x;
protected:
int y;
public:
int z;
};
class derived : public base
{
public:
void getdata()
{
    cout <<"enter x,y and z: ";
    // cin>>x;
    cin>>y;cin>>z;
}
};
int main()
{
    derived d;
    d.getdata();
    cout<<"........result......"<<endl;
    // cout<<"x = "<<d.x<<endl;
    // cout<<"y = "<<d.y<<endl;
    cout<<"z = "<<d.z<<endl;
    return 0;
}