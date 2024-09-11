//write a program to calculate the number of lines in a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int count = 0;
    string line;
    ifstream fin;
    fin.open("test.txt");
    while (getline(fin, line))
    {
    count++;
    }
    cout << "Numbers of lines in the file : " << count << endl;
    return 0;
}