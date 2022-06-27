#include <iostream>

using namespace std;

double cube(double num) {
    return num * num * num; // This will return
    cout << "Hello"; // This won't return
}

int main() {

    cout << cube(5.0);

    return 0;
}