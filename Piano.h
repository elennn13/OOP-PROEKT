#ifndef PIANO_H
#define PIANO_H

#include <iostream>
#include <thread>
#include <chrono>
#include <stdexcept>

class Piano { // ����� Piano �������� �� ������ ������� 
              // ������ � ��������������� �����. �� ��������
              // ������ ��� ��������� ������� ������ � �� ������������.
public:
    // �����������
    Piano();

    // ����� ��� ��������������� �����
    void playKey(char key);

private:
    // ����� ��� ��������� ��������� ������� �������
    void pressKey(char key);

    // �����, ������� "������" ��� ������� �������
    void soundEffect(char key);
};

#endif // PIANO_H