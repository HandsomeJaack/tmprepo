#include <iostream>

int inverseFactorial(int factorial) {
    int current = 1;
    while (factorial > current) {
        if (factorial % current) {
            return -1; //not divisible
        }
        factorial /= current;
        ++current;
    }
    if (current == factorial) {
        return current;
    }
    return -1;
}

int main() {
    int number;
    int fact = 1;
    std::cout << "Enter any number: ";
    std::cin >> number;
    for (int i = 1; i < number; ++i)
        fact = fact * i;
    std::cout << "Factorial of " << number 
              << "is: " << fact << std::endl;

    std::cout << "Enter any number: ";
    std::cin >> number;
    std::cout << "Invers factorial of " << number
              << "is: " << inverseFactorial(number) << std::endl;

    return 0;
}