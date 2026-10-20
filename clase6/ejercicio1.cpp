/*
EJERCICIO 2 - Promedio de 3 notas (validacion 0 a 10)
Autor: Jhonatan Torres
Fecha: 16 de Octubre del 2026

Enunciado:
    El sistema recibe 3 notas y muestra el promedio.
    Regla: cada nota debe estar en el rango de 0 a 10.
    Si alguna nota esta fuera del rango, mostrar "Datos inválidos".

E/P/S
    Entrada: nota1, nota2 y nota3
    Proceso: validar rango, calcular promedio
    Salida: promedio o "Datos invalidos"
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 1) vairbales de entrada
    double n1, n2, n3, promedio;

    // 2) Lectura de notas
    cout << "Ingrese nota 1: ";
    cin >> n1;
    cout << "Ingrese nota 2: ";
    cin >> n2;
    cout << "Ingrese nota 3: ";
    cin >> n3;

    // 3) Validacion: si alguna nota esta fuera del rango [0 a 10] -> invalido

    if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10)
    {
        cout << "Datos invalidos " << endl;
        return 0; // Terminamos aqui para no calcular el promedio con datos incorrectos
    }

    // 4)  Proceso: calculo del promedio
    promedio = (n1 + n2 + n3) / 3.0;

    // 5 ) Salida
    cout << "Promedio: " << promedio << endl;

    return 0;
}