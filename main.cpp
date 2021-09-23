#include <iostream>
#include <cmath>
#include <string>

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
    printResult(number, inverseFactorial(number),
                        "Inverse factorial");

    number = askForInput();
    int secondNumber = askForInput();
    printResult(number, std::pow(number, secondNumber), "Pow", secondNumber);
    return 0;
}