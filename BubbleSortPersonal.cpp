#include<iostream>
using namespace std;

int main(){

    int numeros[] = {9,4,7,8,1};
    int aux;

    for(int i = 0; i<5; i++){
        for(int j = i+1; j<5; j++){
            
            if(numeros[i]>numeros[j]){
                aux = numeros[j];
                numeros[j] = numeros[i];
                numeros[i] = aux;
            }
            
        }
    }
       for(int k = 0; k<5; k++){
        cout<<numeros[k]<<endl;
     }



    return 0;
}