#include <iostream>

int recursiveFactorial(int n) {
    if (n > 1)
        return n * recursiveFactorial(n - 1);
    else
        return 1;
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

    std::cout << recursiveFactorial(5);
    return 0;
}