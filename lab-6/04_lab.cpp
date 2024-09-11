//write a program to find the sum of two number with different data types by using templet function
#include<iostream>
using namespace std;
template<class T> 
T add(T &a,T &b)
{
  T result=a+b;
  return result;
}
int main()
{
  int i,j;
  float m, n;
  cout<<"enter two integer number: ";
  cin>>i>>j;
  cout<<"enter two floating number: ";
  cin>>m>>n;
  cout<<"Addition of "<<i<<"and"<< j <<"is :"<<add(i,j);
  cout<<'\n';
  cout<<"Addition of"<< m <<"and"<< n <<"is :"<<add(m,n);
  return 0;
}