#include "Piano.h"
#include <windows.h> // ��� Beep()

// �����������
Piano::Piano() {}
// ������� ��� ����������� �������
void displayPiano() {
    std::cout << "   | Z | X | C | V | B | N | M |\n";
    std::cout << "   |   |   |   |   |   |   |   |\n";
    std::cout << "   |---|---|---|---|---|---|---|\n";
    std::cout << "     C   D   E   F   G   A   B\n\n";
}
// ����� ��� ��������������� �����
// � ������ playKey �����������, ��� ������� ������� ���������
// � ��������� �� 'M' �� 'Z'.���� ���, ������������� ����������, 
// ������� �������������� � main.cpp.
// ����������//������������ std::invalid_argument ��� ��������� 
// �������� ������� ������.
void Piano::playKey(char key) {
    if (key < 'M' || key > 'Z') {
        throw std::invalid_argument("������������ �������. ������� �� M �� Z.");
    }
    pressKey(key);
    soundEffect(key);
}
// ����� ��� ��������� ��������� ������� �������
// ����� pressKey ������� ������� # � ������� 
// ��� �������� ����������� ������� ������� �������.
// ������ � ��������//��� �������� ������� "�����������" 
// ������������ std::this_thread::sleep_for() ��� ��������� 
// ��������� ��������.
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
   

// �����, ������� "������" ��� ������� �������
void Piano::soundEffect(char key) { // ����� ����� �������� ��������������� ��������� �������
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
        Beep(frequency, 500); // ������������� ���� � �������� �������� � �������������
    }
