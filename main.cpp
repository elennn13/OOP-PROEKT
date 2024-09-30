#include <iostream>
#include "Piano.hpp"
#include <conio.h> // Для _getch()

int main() {
    setlocale(LC_ALL, "ru");

    Piano piano;
    char inputKey;
    piano.display();

    while (true) {
        inputKey = _getch(); // Ожидаем нажатия клавиши

        // Очистка экрана (имитация)
        system("cls");

        piano.display();
    }

    //std::cin >> inputKey;
    //inputKey = toupper(inputKey); // Приводим к верхнему регистру
    try {
        piano.playKey(inputKey);
    }
    catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl; // Обработка исключений
    }


    return 0;
}