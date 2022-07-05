#include <iostream>

using namespace std;

int main() {

    cout << "This is using While Loop" << endl;
    int index = 1;
    while(index <= 5) {
        cout << index << endl;
        index++;
    }

    cout << "This is using For Loop" << endl;
    for(int i = 1; i <= 5; i++) {
        cout << i << endl;
    }

    cout << "This is using For Loop to loop through elements in array" << endl;
    int nums[] = {1, 2, 5, 7, 3};
    for(int j = 0; j < 5; j++) {
        cout << nums[j] << endl;
    }

    return 0;
}