#ifndef PIANO_HPP
#define PIANO_HPP


#include <iostream>
#include <thread>
#include <chrono>
#include <exception>


class Piano { // ����� Piano �������� �� ������ ������� 
              // ������ � ��������������� �����. �� ��������
              // ������ ��� ��������� ������� ������ � �� ������������.
public:
    // �����������
    Piano();

    // ����� ��� ��������������� �����
    void playKey(char key);

    // TODO:
    void display();

private:
    // ����� ��� ��������� ��������� ������� �������
    void pressKey(char key);

    // �����, ������� "������" ��� ������� �������
    void soundEffect(char key);
};

#endif // PIANO_HPP