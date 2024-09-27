#ifndef SOUNDPLAYER_H
#define SOUNDPLAYER_H

#include <iostream>
#include <conio.h>   // Для _getch()
#include <windows.h> // Для Beep()


class SoundPlayer { // Класс SoundPlayer предназначен для обработки
                    // звуковой части (можно расширить для более 
                    // сложных звуковых эффектов, если необходимо).
public:
    void playSound(char key);
};

#endif // SOUNDPLAYER_H
