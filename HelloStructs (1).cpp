#include <iostream>

using namespace std;

int main() {
    // ДО ИНИЦИАЛИЗАЦИИ - СДЕЛАТЬ СКРИНШОТ 1
    int intNumber;
    float floatNumber;
    bool logic;
    char symbol;
    char* pointerSymbol = &symbol;
    char* pointerToPointer = pointerSymbol;

    // Установите точку останова здесь для СКРИНШОТА 1
    // Показать память до инициализации

    // ПОСЛЕ ИНИЦИАЛИЗАЦИИ - СДЕЛАТЬ СКРИНШОТ 2
    *pointerToPointer = '^';
    intNumber = 5;
    floatNumber = 36.6;
    logic = true;
    symbol = '#';
    *pointerSymbol = '—';

    // Установите точку останова здесь для СКРИНШОТА 2
    // Показать память после инициализации

    cout << intNumber << endl;
    cout << floatNumber << endl;
    cout << logic << endl;
    cout << symbol << endl;

    return 0;
}