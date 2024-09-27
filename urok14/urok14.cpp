#include <iostream>
#include <string>
﻿#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int f;
    int a, b;
    int x, y, z;
    cout << "Что вы хотите проверить?\n";
    cout << "1 - Прямоугольник или квадрат\n";
    cout << "2 - Треугольник\n";
    cout << "Введите 1 или 2: ";
    cin >> f;
    if (f == 1) {
        cout << "Введите 2 стороны прямоугольника:\n";
        cin >> a;
        cin >> b;
        cout << (a == b) << "Это квадрат\n";
        cout << (a != b) << "Это прямоугольник\n";
    }
    else (f == 2)
    {
        cout << "Введите 3 стороны треугольника:\n";
        cin >> x;
        cin >> y;
        cin >> z;
        cout << (x == y == z) << "Это равносторонний треугольник\n";
        cout << (x == y or y == z or x == z) << "Это равнобедренный треугольник\n";
        cout << (x != y and y != z and x != z) << "Это разносторонний треугольник\n";
    }
    else {
        cout << "Ошибка!\n";
    }
}
