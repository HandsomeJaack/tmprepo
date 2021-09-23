#include <iostream>
#include <cmath>
#include <string>

int askForInput() {
    int number;
    std::cout << "Enter any number: ";
    std::cin >> number;
    return number;
}

void printResult(int number,
                 int res,
                 std::string method) {
    std::cout << method << " of " << number
              << " is: " << res << std::endl;
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
    printResult(number, fact, "Factorial");

    number = askForInput();
    printResult(number, recursiveFactorial(number),
                        "Recursive factorial");

    number = askForInput();
    printResult(number, std::pow(number, number), "Pow");
    return 0;
}