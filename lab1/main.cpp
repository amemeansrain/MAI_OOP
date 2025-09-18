#include <iostream>
#include "include/lab1.h"

int main() {
    std::string userString;
    std::cout << "Введите строку длины n (0 <= n <= 100), состоящую из символов ( и ): ";
    std::getline(std::cin, userString); // Используем getline() из-за неспособности cin читать пустые строки
    if (!validateString(userString)) std::cerr << "Ваша строка не подходит под условие" << std::endl;
    else std::cout << std::boolalpha << isBalanced(userString) << std::endl; // Используем boolalpha чтобы выводить true/false вместо 1/0
}
