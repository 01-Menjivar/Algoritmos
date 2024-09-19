//Funcion recursiva que retorna la suma de los primeros n impares

#include<iostream>
using namespace std;

int oddSum(int n){
    if(n==1){
        return n;
    }else{
        return (2*n)-1+oddSum(n-1);
    }
}

int main(){


    cout<<oddSum(3);


    return 0;
}