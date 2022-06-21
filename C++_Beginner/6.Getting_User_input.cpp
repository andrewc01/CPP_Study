#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "You are " << age << " years old." << endl;

    char userCharacter;
    cout << "User Character: ";
    cin >> userCharacter;

    cout << "This is your character: " << userCharacter << "" << endl;

    string userString;
    cout << "User String: ";
    getline(cin, userString);

    cout << "This is your string: " << userString << "" << endl;


    return 0;
}