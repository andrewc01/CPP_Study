#include <iostream>

using namespace std;

int main() {
    string phrase = "Studying C++";
    phrase[0] = 'B';

    cout << phrase << endl;
    cout << phrase.length() << endl;
    cout << phrase[2] << endl;
    cout << phrase.find("C++", 0) << endl;
    cout << phrase.substr(8, 3) << endl; // get 3 characters from index 8

    return 0;
}