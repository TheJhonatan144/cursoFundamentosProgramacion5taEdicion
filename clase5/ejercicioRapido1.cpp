/*
MINI EJERICIO 1
Autor: Jhonatan Torre
Fecha: 14 Octubre de 2026

Enunciado: Pide dos numeros enteros  y muestra la suma

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declaracion de variables
    int num1, num2, suma;

    // Ingreso de datpos
    cout << "Ingrese numero 1: " << endl;
    cin >> num1;

    cout << "Ingrese numero 2: ";
    cin >> num2;

    // Calculos o proceso
    suma = num1 + num2;

    // Salida de datos
    cout << "Suma = " << suma;

    return 0;
}