#include <iostream>
using namespace std;

int main() {
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;

    cout << "Age: " << pAge << endl;
    cout << "GPA: "<< pGpa << endl;
    cout << "Name: "<< pName << endl;

    cout << "Dereferencing age: " << *pAge << endl;
    cout << "Dereferencing GPA: "<< *pGpa << endl;
    cout << "Dereferencing name: "<< *pName << endl;

    return 0;
}