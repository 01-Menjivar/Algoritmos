#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n<=1){
        return n;
    }else{
        return fibonacci(n-2)+fibonacci(n-1);
    }
}
int main(){

   int resultado = fibonacci(7);
   cout<<resultado;


    return 0;
}