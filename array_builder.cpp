// Crear una función que reciba dos enteros, n y m, y construya n arreglos, todos de longitud m,
// y retorne todos los arreglos construidos, sin utilizar arreglos para retornar la información.

#include<iostream>
#include <stdlib.h>

using namespace std;

int *crearArreglos(int n, int m)
{
    int *arreglos = new int[n * m]; //Crea un único arreglo bidimensional
    for (int i = 0; i < n * m; i++)
    {
        arreglos[i] = rand() % 100; // Llenamos con números aleatorios entre 0 y 99
    }
    return arreglos; //Retorna el arreglo bidimensional
}

void mostrarArreglos(int *arreglos, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Arreglo " << i + 1 << ": ";
        for (int j = 0; j < m; j++)
        {
            cout << arreglos[i * m + j] << " ";
        }
        cout << endl;
    }
}

void liberarMemoria(int *arreglos)
{
    delete[] arreglos;
}

int main()
{
    int n, m;
    cout << "Ingrese el número de arreglos (n): ";
    cin >> n;
    cout << "Ingrese la longitud de cada arreglo (m): ";
    cin >> m;

    int *arreglosCreados = crearArreglos(n, m);
    mostrarArreglos(arreglosCreados, n, m);
    liberarMemoria(arreglosCreados);

    return 0;
}