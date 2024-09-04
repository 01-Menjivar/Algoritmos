#include <iostream>
#include <cmath>   //Libreria para hacer uso de la funcion floor
#include <climits> //Para calcular el límite de cada dato primitivo que puede soportar la máquina actual

using namespace std;

void MAX_CROSS_SUBARRAY(int *A, int low, int mid, int high, int *R)
{
    int sum = 0;
    int pos_left, pos_right;

    int max_left = INT_MIN;

    for (int i = mid; i >= low; i--)
    {
        sum += A[i];
        if (sum > max_left)
        {
            max_left = sum;
            pos_left = i;
        }
    }

    sum = 0;
    int max_right = INT_MIN;


    for (int j = mid+1; j<= high; j++){
        sum+=A[j];
        if(sum>max_right){
            max_right = sum;
            pos_right = j;
        }
    }

        R[0] = pos_left;
        R[1] = pos_right;
        R[2] = max_left+max_right;


}

void MAX_SUBARRAY(int *A, int low, int high, int *R)
{
    // Caso base: cuando solo queda un dato (si posicion final es igual a posicion inicial)
    if (low == high)
    {
        R[0] = low;
        R[1] = high;
        R[2] = A[low];
    }
    else
    {
        int mid = floor((low + high) / 2); // Partir por la mitad el arreglo

        int left[3];  // Arreglo para las respuestas de la izquierda
        int right[3]; // Arreglo para las respuestas de la derecha

        // Recursión para seguir partiendo en dos el arreglo
        MAX_SUBARRAY(A, low, mid, left);
        MAX_SUBARRAY(A, mid + 1, high, right);

        int cross[3];
        MAX_CROSS_SUBARRAY(A, low, mid, high, cross);

        if (left[2] >= right[2] && left[2] >= cross[2])
        {
            R[0] = left[0];
            R[1] = left[1];
            R[2] = left[2];
        }
        else
        {
            if (right[2] >= left[2] && right[2] >= cross[2])
            {
                R[0] = right[0];
                R[1] = right[1];
                R[2] = right[2];
            }
            else
            {
                R[0] = cross[0];
                R[1] = cross[1];
                R[2] = cross[2];
            }
        }
    }


}

int main(void)
{

    int A[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int answer[3];

    // MAX_SUBARRAY(arreglo numeros ,posicion inicial, posicion final, arreglo con las respuestas)
    MAX_SUBARRAY(A, 0, 7, answer);
    // Para mandar un arreglo se manda solo el nombre del arreglo y automáticamente se manda por referencia

    cout << "La suma máxima es " << answer[2] << " que ocurre en el subarreglo [" << answer[0] << "," << answer[1] << "]";

    return 0;
}