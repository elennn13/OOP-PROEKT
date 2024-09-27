﻿#include <iostream>
#include <cctype>
#include "Piano.h"
#include "Piano.cpp"
#include <conio.h> // Для _getch()

int main() {
    setlocale(LC_ALL, "ru");

    Piano piano;
    char inputKey;
    void displayPiano(); // Показываем начальное пианино

    while (true) {
        inputKey = _getch(); // Ожидаем нажатия клавиши

        // Очистка экрана (имитация)
        system("cls");

        displayPiano(); // Отображаем пианино снова
        pressKey(key);  // Отображаем нажатую клавишу
        soundEffect(key); // Воспроизводим звук
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