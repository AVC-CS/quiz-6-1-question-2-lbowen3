#include <iostream>
#include <fstream>
using namespace std;

/***************************************************
 * Code your program here
 ***************************************************/

int writeFile(string);
int readFile(string); 

ofstream ofs;

int writeFile(string filename)
{
   ofs.open(filename);
   if (!ofs){
    cerr << "File open Error \n";
    exit(0);
   }

    int empNum;
    cout << "Input number of employees: ";
    cin >> empNum;
    ofs << empNum << endl;

    string empID, empName, empDep, empSal;

    for (int i=0; i<empNum; i++)
    {
        cout << "Input employee ID, Name, Department, and Salary: ";
        cin >> empID >> empName >> empDep >> empSal;
        ofs << empID << " " << empName << " " << empDep << " " << empSal << endl;
    }

    return empNum;
   
}

int readFile(string filename)
{

}