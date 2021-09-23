#include <iostream>

int main() {
    int number;
    int fact = 1;
    std::cout << "Enter any number: ";
    std::cin >> number;
    for (int i = 1; i < number; ++i)
        fact = fact * i;
    std::cout << "Factorial of " << number 
              << " is: " << fact << std::endl;
    return 0;
}