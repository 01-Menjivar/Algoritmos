// Crear una función que reciba un arreglo por referencia y dos enteros, p1 y p2, e intercambie
// los datos que se encuentran en las posiciones p1 y p2 del arreglo.

#include <iostream>
using namespace std;

void exchangeNumber(int *numeros, int p1, int p2)
{
  int temp = 0;
  temp = numeros[p1-1];
  numeros[p1-1] = numeros[p2-1];
  numeros[p2-1] = temp;
}

int main()
{
    int numeros[] = {1, 2, 3, 4, 5};

    int p1, p2;

    cout << "Digite las posiciones a intercambiar de valor" << endl;
    cin >> p1 >> p2;


    exchangeNumber(numeros, p1, p2);
    for(int k = 0; k<5; k++){
        cout<<numeros[k]<<" ";
    }

    return 0;
}