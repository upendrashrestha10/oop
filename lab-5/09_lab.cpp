//write a program to implement pure virtual function
#include <iostream>
using namespace std;
class Shape
{
	public:
		virtual void area() = 0;
};
class Rectangle : public Shape
{
	private:
		int l;
		int b;
	public:
		Rectangle(int x, int y)
		{
			l = x;
			b = y;
		}
		void area()
		{
			cout<<"Area of rectangle is: "<<(l*b)<<endl;
		}
};
class Circle : public Shape
{
	private:
		int r;
	public:
		Circle(int x)
		{
			r = x;
		}
		void area()
		{
			cout<<"Area of circle is: "<<(3.142*r*r)<<endl;
		}
};
int main()
{
	Shape *s;
	s = new Rectangle(10, 20);
	s->area();
	s = new Circle(2);
	s->area();
	return 0;
}