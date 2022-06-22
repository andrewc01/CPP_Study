#include <iostream>

using namespace std;

void sayHi(string name, int age) {
    cout << "Jedi Master " << name << " is " << age << " years old." << endl;
}

int main() {
    sayHi("Yoda", 900);
    sayHi("Kenobi", 40);
    sayHi("Skywalker", 20);

    return 0;
}