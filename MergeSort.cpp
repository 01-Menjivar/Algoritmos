#include <iostream>
#include <climits>

using namespace std;

// Funcion para mostrar el array
void show_array(int *A, int n)
{
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << ",";
    }

    cout << "]\n";
}

// Funcion para mezclar las respuestas
void MERGE(int *A, int p, int q, int r)
{ // Recibe el array, li, medio, ls
    int i, j;
    // tamaño de los array izquierdo y derecho
    int nl = q - p + 1;
    int nr = r - q; // r-(q+1)+1

    int L[nl + 1]; // Se le suma una celda extra para agregar el menos infinito
    int R[nr + 1];

    // Llenar las pilas

    // Llenar la pila izquierda
    for (i = 0; i < nl; i++)
        L[i] = A[p + i];
    // Accede a la ultima celda
    L[nl] = INT_MAX;

    // Llenar la pila derecha
    for (j = 0; j < nr; j++)
        R[j] = A[q + 1 + j];
    // Accede a la ultima celda
    R[nr] = INT_MAX; // INT MAX NUNCA GANA EN SER EL MAS PEQUEÑO

    i = j = 0;
    // i para L
    // j para r

    // Mezclar ambas pilas
    for (int k = p; k <= r; k++)
    {
        if (L[i] < R[j])
        {                // Compara ambas pilas
            A[k] = L[i]; // Si L es mayor llena el arreglo A con los valores de la izquierda
            i++;
        }
        else
        {
            A[k] = R[j]; // Si R es mayor llena el arreglo A con los valores de la derecha
            j++;
        }
    }
}

// Funcion que representa el proceso de divide y conquista
// Funcion recursiva
void MERGE_SORT(int *A, int p, int r)
{
    // Caso base (solo hay un elemento)
    if (p < r)
    {                        // Cuando hay mas de un dato se hace lo siguiente
        int q = (p + r) / 2; // Dividimos en 2 el arreglo

        MERGE_SORT(A, p, q);     // Llama la funcion con el trozo izquierdo
        MERGE_SORT(A, q + 1, r); // Llama la funcion con el trozo derecho

        MERGE(A, p, q, r); // Mezcla ambas respuestas para hacer una sola solucion
    }
}

int main(void)
{

    int A[7] = {8, 4, 6, 9, 5, 3, 1};

    show_array(A, 7);
    MERGE_SORT(A, 0, 6);
    show_array(A, 7);

    return 0;
}