#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << 40 << endl;
    cout << -40.319 << endl;
    cout << 5 + 7 << endl;
    cout << 5 - 7 << endl;
    cout << 5 * 7 << endl;
    cout << 35 / 5 << endl;
    cout << 10 % 3 << endl;

    int wnum = 5;
    double dnum = 5.5;

    cout << wnum << endl;
    cout << dnum << endl;
    cout << wnum + dnum << endl;

    wnum++;
    cout << wnum << endl;

    wnum+=80;
    cout << wnum << endl;

    // using cmath
    cout << pow(2, 5) << endl;
    cout << pow(3, 3) << endl;
    cout << sqrt(36) << endl;

    cout << round(4.3) << endl;
    cout << round(4.6) << endl;
    cout << ceil(4.1) << endl;
    cout << floor(4.9) << endl;

    cout << fmax(3, 10) << endl;
    cout << fmin(3, 10) << endl;

    // ... and much more

    return 0;
}