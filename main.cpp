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
                 std::string method,
                 int secondNumber = 0) {
    std::cout << method << " of " << number
              << (method == "Pow" ?
                            "^" + std::to_string(secondNumber)
                            : "")
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
    int secondNumber = askForInput();
    printResult(number, std::pow(number, secondNumber), "Pow", secondNumber);
    return 0;
}