// Crear una función que reciba un arreglo y un valor V, y retorne true si V se encuentra al menos
// dos veces en el arreglo, y false en caso contrario.

#include<iostream>
using namespace std;

bool findRepeat(int *arr, int v){
    int cont = 0;
    for(int i = 0;i<6; i++){
        if(arr[i] == v){
            cont++;
        }
    }

    if(cont>=2){
        return true;
    }else{
        return false;
    }
}

int main(){

    int arr[] = {2,4,1,4,1,4};
    int v;

    cout<<"Escriba el numero que deseas saber si se repite"<<endl;
    cin>>v;

    if(findRepeat(arr,v)){
        cout<<"El número: "<<v<<" sí se encuentra al menos 2 veces en el arreglo"<<endl;
    }else{
        cout<<"El número: "<<v<<" no se encuentra al menos 2 veces en el arreglo"<<endl;
    }
    



    return 0;
}