#include<windows.h>
#include<string>
#include <iostream>
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
        if (a == b) {
            cout << "Это квадрат\n";
        }
        else {
            cout << "Это прямоугольник\n";
        }
    }
    else
        if (f == 2) {
            cout << "Введите 3 стороны треугольника:\n";
            cin >> x;
            cin >> y;
            cin >> z;
            if (x == y == z) {
                cout << "Это равносторонний треугольник\n";
            }
            else
                if (x == y or y == z or x == z) {
                    cout << "Это равнобедренный треугольник\n";
                }
            else {
                cout << "Это разносторонний треугольник\n";
            }
    }

        else {
            cout << "Ошибка!\n";
        }
    return 0;
}