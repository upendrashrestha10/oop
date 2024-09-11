//write a program to read the contents of a text file using getline() method and display it
#include<fstream>
#include<iostream>

using namespace std;
int main()
{
    ifstream fin;
    char str[100];
    fin.open("test.txt");
    fin.getline(str,99);
    // while (!fin.eof())
    // {
    //     fin.getline(str,99);
    //     cout << str << endl;
    //  }
    cout<<"\n form file: "<<str;
    fin.close();
    return 0;
}
