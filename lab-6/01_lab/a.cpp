//write a program that throws and handles exceptions in following situation
//a) division by zero
#include <iostream>
using namespace std;
int main()
{
	double a, b;
	cout<<"Enter two integer values: ";
	cin>>a>>b;
	try
	{
		if(b == 0)
		{
			throw b;
		}
		else
		{
			cout<<(a/b);
		}
	}
	catch(int)
	{
		cout<<"Second value cannot be zero";
	}
	return 0;
}