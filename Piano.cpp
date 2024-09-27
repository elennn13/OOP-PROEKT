#include "Piano.h"
#include <windows.h> // Для Beep()

// Конструктор
Piano::Piano() {}
// Функция для отображения пианино
void displayPiano() {
    std::cout << "   | Z | X | C | V | B | N | M |\n";
    std::cout << "   |   |   |   |   |   |   |   |\n";
    std::cout << "   |---|---|---|---|---|---|---|\n";
    std::cout << "     C   D   E   F   G   A   B\n\n";
}
// Метод для воспроизведения звука
// В методе playKey проверяется, что нажатая клавиша находится
// в диапазоне от 'M' до 'Z'.Если нет, выбрасывается исключение, 
// которое обрабатывается в main.cpp.
// ИСКЛЮЧЕНИЕ//Используются std::invalid_argument для обработки 
// неверных входных данных.
void Piano::playKey(char key) {
    if (key < 'M' || key > 'Z') {
        throw std::invalid_argument("Неправильная клавиша. Нажмите от M до Z.");
    }
    pressKey(key);
    soundEffect(key);
}
// Метод для временной индикации нажатой клавиши
// Метод pressKey выводит символы # в консоль 
// для создания визуального эффекта нажатия клавиши.
// Потоки и задержки//Для создания эффекта "вдавливания" 
// используется std::this_thread::sleep_for() для симуляции 
// временной задержки.
void Piano::pressKey(char key) {
    const int keys_number = 7;
    const char keys[] = "zxcvbnm";
    std::cout << "   ";
   for (size_t i = 0; i < key; ++i) {
        if (key == key) {
            std::cout << "| # ";
        }
        else {
            std::cout << "|   ";
        }
    }
    std::cout << "|\n";

    std::cout << "   |---|---|---|---|---|---|---|\n";
    std::cout << "     C   D   E   F   G   A   B\n\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
   

// Метод, который "звучит" при нажатии клавиши
void Piano::soundEffect(char key) { // Здесь можно добавить воспроизведение звукового сигнала
    int frequency = 0;
    switch (std::tolower(key)) { //
    case 'z': frequency = 262; break; // C
    case 'x': frequency = 294; break; // D
    case 'c': frequency = 330; break; // E
    case 'v': frequency = 349; break; // F
    case 'b': frequency = 392; break; // G
    case 'n': frequency = 440; break; // A
    case 'm': frequency = 494; break; // B
    default: return;
    }
        Beep(frequency, 500); // Воспроизводим звук с заданной частотой и длительностью
    }
