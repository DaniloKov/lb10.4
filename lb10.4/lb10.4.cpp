// lb10.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Скласти структурну схему алгоритму та програму обчислення значень функції y=F(x) відповідно до завдань, зазначених у таблиці.
//Скласти структурну схему алгоритму та програму обчислення значень функції y=F(x) відповідно до завдань, зазначених у таблиці.
//завдання 15

#include <iostream>
#include <Windows.h>
#include <math.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //спочатку задаємо константи
    cout << "Ця програма вираховує у за формулою яка задана в завданні 4 (номер 15)" << endl;
    const double N = 9.1, b = 3;
    //щоб розрахувати y потрібно знати а , щоб знати а треба знати х , щоб знайти х треба розрахувати його за формулою
    //тому спочатку шукаєм х
    double e,x,a,y;
    cout << "Введіть значення е : " ;
    cin >> e;
    x = pow(e, b) + N;
    //далі знаходимо a
    a = sqrt(pow(x, 2) + pow(b, 2));
    //знаходимо y
    y = log10(a) / log10(b);
    cout << "x=" << x << endl;
    cout << "a=" << a << endl; // виводимо значення на екран
    cout << "y=" << y << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
