#include<iostream>
using namespace std;

int main(){

    int numeros[] = {4,5,7,8,1};

    int i, pos, aux;

    for(i = 0; i<5; i++){
        pos = i;
        aux = numeros[pos];
        while ((pos>=0) && (numeros[pos-1]>aux))
        {
           aux = numeros[pos];
           numeros[pos] = numeros[pos-1];
           pos--; 
        }
        numeros[pos] = aux;
        
    }


    return 0;
}