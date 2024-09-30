#ifndef PIANO_HPP
#define PIANO_HPP


#include <iostream>
#include <thread>
#include <chrono>
#include <exception>


class Piano { // Класс Piano отвечает за логику нажатия 
              // клавиш и воспроизведение звука. Он содержит
              // методы для обработки нажатия клавиш и их визуализации.
public:
    // Конструктор
    Piano();

    // Метод для воспроизведения звука
    void playKey(char key);

    // TODO:
    void display();

private:
    // Метод для временной индикации нажатой клавиши
    void pressKey(char key);

    // Метод, который "звучит" при нажатии клавиши
    void soundEffect(char key);
};

#endif // PIANO_HPP