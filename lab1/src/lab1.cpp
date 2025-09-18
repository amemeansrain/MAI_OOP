#include <iostream>
#include "../include/lab1.h"

bool validateString(std::string str) {
    if (!str.length()) return true; // Пустая строчка является валидной
    if (str.length() > 100) return false; // Строчка, содержащая >100 символов является невалидной
    for (char c : str) // Проходимся по каждому символу в строке
        if (c != '(' && c != ')') return false; // Если встречаем невалидный символ - возвращаем false
    return true; // В случае, если все символы оказались валидными, возвращаем true
}

bool isBalanced(std::string str) {
    // Вариант 3:
    // Проверить строку, состоящую из символов ( и ), на сбалансированность

    if (!str.length()) return true; // Пустая строчка является сбалансированной

    if (str.length() % 2) return false; // Если длина нечетная - строка не сбалансирована

    int count {0};
    for (char c : str) {
        if (c == '(') ++count;
        else {
            --count;
            if (count < 0) return false; // Закрывающих скобок больше чем открывающих - строка не сбалансирована
        }
    }
    
    return !count; // Все открытые скобки должны быть закрыты
}