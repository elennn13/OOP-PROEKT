#ifndef SOUNDPLAYER_H
#define SOUNDPLAYER_H

#include <iostream>
#include <conio.h>   // ��� _getch()
#include <windows.h> // ��� Beep()


class SoundPlayer { // ����� SoundPlayer ������������ ��� ���������
                    // �������� ����� (����� ��������� ��� ����� 
                    // ������� �������� ��������, ���� ����������).
public:
    void playSound(char key);
};

#endif // SOUNDPLAYER_H
