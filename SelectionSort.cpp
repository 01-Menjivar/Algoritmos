#include <iostream>
using namespace std;
int main()
{

    int numeros[] = {5, 4, 9, 2, 7};
    int aux, min, i, j;

    for (i = 0; i < 5; i++)
    {min = i;
        for (j = i+1; j < 5; j++)
        {
            if (numeros[j] < numeros[min])
            {
                min = j;
            }
        }
            aux = numeros[i];
            numeros[i] = numeros[min];
            numeros[min] = aux;
    }

    for(int k = 0; k<5; k++){
        cout<<numeros[k];
    }
    

    return 0;
}