//Funcion recursiva que retorna el producto de los primeros n pares

#include<iostream>
using namespace std;

int multi(int n){
    if(n == 1){
        return 2; 
    }else{
        return 2 * n * multi(n-1);
    }
}

int main(){
    cout<<multi(3);
    return 0;
}