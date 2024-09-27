#ifndef PIANO_H
#define PIANO_H

#include <iostream>
#include <thread>
#include <chrono>
#include <stdexcept>

class Piano { // Класс Piano отвечает за логику нажатия 
              // клавиш и воспроизведение звука. Он содержит
              // методы для обработки нажатия клавиш и их визуализации.
public:
    // Конструктор
    Piano();

    // Метод для воспроизведения звука
    void playKey(char key);

private:
    // Метод для временной индикации нажатой клавиши
    void pressKey(char key);

    // Метод, который "звучит" при нажатии клавиши
    void soundEffect(char key);
};

#endif // PIANO_H