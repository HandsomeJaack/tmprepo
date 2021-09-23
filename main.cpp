#include <iostream>

int askForInput() {
    int number;
    std::cout << "Enter any number: ";
    std::cin >> number;
    return number;
}

void printResult(int number, int fact) {
    std::cout << "Factorial of " << number
              << " is: " << fact << std::endl;
}

int recursiveFactorial(int n) {
    if (n > 1)
        return n * recursiveFactorial(n - 1);
    else
        return 1;
}

int main() {
    int fact = 1;
    int number = askForInput();
    for (int i = 1; i <= number; ++i)
        fact = fact * i;
    printResult(number, fact);

    number = askForInput();
    printResult(number, recursiveFactorial(number));
    return 0;
}