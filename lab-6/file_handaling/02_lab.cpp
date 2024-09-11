//write a program to detect the end of file using eof() function
#include<fstream>
#include<iostream>

using namespace std;
int main()
{
    ifstream fin;
    char str[100];
    fin.open("test.txt");
    while (!fin.eof())              //using eof() function
    {
        fin.getline(str,99);
        cout << str << endl;
     }
   
    return 0;
}
