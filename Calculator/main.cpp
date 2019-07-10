#include <iostream>

using namespace std;

int main() {
    char op;

    float num1, num2;

    std::cout << "Please enter the first number!";
    std::cin >> num1;

    std::cout << "Please enter the second number!";
    std::cin >> num2;

    std::cout << "Please enter a operator!";
    std::cin >> op;

    switch (op)
    {
        case '+':
            std::cout << num1 + num2;
            break;
        case '-':
            std::cout << num1 - num2;
            break;
        case '*':
            std::cout << num1 * num2;
            break;
        case '/':
            std::cout << num1 / num2;
            break;
        case ':':
            std::cout << num1 / num2;
            break;
        default:
            std::cout << "This operator does not exists!";
    }
}
