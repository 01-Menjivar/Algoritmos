// Crear una función que reciba un arreglo por referencia y dos valores, V1 y V2, de modo que
// sobreescriba todas las ocurrencias de V1 en el arreglo con V2.

#include<iostream>
using namespace std;

void arrayRef(int *dir_arr,int v1, int v2){
    for(int i = 0; i<6; i++){
        if(dir_arr[i] == v1){
            dir_arr[i] = v2;
        }
    }

    for(int j = 0; j<6; j++){
        cout<<*dir_arr++;
    }

}


int main(){

    int arr[] = {2,4,2,4,2,4};
    int v1,v2;
    
    cout<<"Digite el número del arreglo a intercambiar"<<endl;
    cin>>v1;

    cout<<"Digite el número por el que desea cambiar: "<<v1<<endl;
    cin>>v2;

    
    arrayRef(arr, v1,v2);


    return 0;
}