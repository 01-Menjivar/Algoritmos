#include<iostream>
using namespace std;


int factorial(int n){
    if(n<=1){
        return 1;
    }else{
        int resultado = n*factorial(n-1);
        return resultado;
    }
}

int main(){

   cout<<factorial(3);

    return 0;
}