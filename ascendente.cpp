//Escriba una función que dado un arreglo de enteros A y un entero n, determine si en el arreglo hay al menos 
//una sección que tenga n enteros en orden ascendente 

#include<iostream>
using namespace std;
 
 bool asc(int* A, int n){
    int cont = 1;
    for(int i = 1; i<n; i++){
        if(A[i]>A[i-1]){
             cont++;
             if(cont==n){
                return true;
             }
        }else{
            cont = 1;
        }
    }

    return false;

 }


int main(){

  int A[]  = {5,6,7,3,0};

    cout<<asc(A,2);

    return 0;
}