/*Crear una función que reciba un arreglo por referencia y un valor V, y que coloque el valor V
cada dos posiciones en el arreglo.
*/

#include<iostream>
using namespace std;

void vInsert(int *dir_arr, int v){
    for(int i = 0; i < 6; i += 2){ 
        dir_arr[i] = v;
    }

    for(int j = 0; j<6; j++){
        cout<<*dir_arr++ << " ";
    }

}



int main(){

    int arr[] = {1,2,3,2,5,6};
    int v;


    cout<<"Digite el valor V: "<<endl;
    cin>>v;

    vInsert(arr,v);


    return 0;
}