//write a program to append data at the end of the file.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream fout("test.txt", ios::app);
    string dataToAppend;
    cout << "Enter data to append to the file: ";
    getline(cin, dataToAppend); // Get the data from user

    // Append the data to the file
    fout << dataToAppend << endl;

    fout.close(); // Close the file
    cout << "Data appended successfully." << endl;
    return 0; // Return success
}
// #include <fstream>
// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     // Open file in append mode
//     ofstream fout("test.txt", ios::app);
//     if (!fout) { // Check if the file was opened successfully
//         cerr << "Error opening file for appending." << endl;
//         return 1; // Return an error code
//     }

//     // Data to be appended
//     string dataToAppend;
//     cout << "Enter data to append to the file: ";
//     getline(cin, dataToAppend); // Get the data from user

//     // Append the data to the file
//     fout << dataToAppend << endl;

//     fout.close(); // Close the file
//     cout << "Data appended successfully." << endl;
//     return 0; // Return success
// }

