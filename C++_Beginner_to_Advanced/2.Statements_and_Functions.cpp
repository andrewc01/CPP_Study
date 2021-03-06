#include <iostream>

int addNumbers(int firstParam, int secondParam) {
    int result = firstParam + secondParam;
    return result;
}

int main() {
    int first_number = 13;
    int second_number = 7;

    std::cout << "First number: " << first_number << std::endl; // 13
    std::cout << "Second number: " << second_number << std::endl; // 7

    int sum = first_number + second_number;

    std::cout << "Sum: " << sum << std::endl; // 20

    sum = addNumbers(25, 7);
    std::cout << "Sum: " << sum << std::endl; // 32

    sum = addNumbers(30, 54);
    std::cout << "Sum: " << sum << std::endl; // 84

    std::cout << "Sum: " << addNumbers(3, 42) << std::endl; // 45

    return 0;
}