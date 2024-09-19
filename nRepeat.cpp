//Crear una función que reciba un arreglo, un valor V, y un entero n, y que retorne true si V se
//encuentra al menos n veces en el arreglo, y false en caso contrario.

#include<iostream>
using namespace std;


bool nRepeat(int* numeros, int n, int v){
    int cont = 0;

    for(int i = 0; i<6; i++){
        if(numeros[i]==v){
            cont++;
        }
    }

    if(cont==n){
        return true;
    }
    else{
        return false;
    }

}

int main(){

    int numeros[] = {2,4,6,2,8,9};
    int v;
    int n;
    

    cout<<"Digite el valor V"<<endl;
    cin>>v;

    cout<<"Digite el valor n"<<endl;
    cin>>n;


     cout<<nRepeat(numeros,n,v);

    return 0;
}

