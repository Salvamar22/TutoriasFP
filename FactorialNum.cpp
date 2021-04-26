//Factorial de un numero: 1*2*3*4*5....*n 6!
#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
    int numero, factorial=1;
    cout<<"Digite un numero: "<<endl;
    cin>>numero;

    for (int i = 1;i <= numero;i++){

        factorial*=i;
    }
    cout<<"\nEl factorial del numero "<<numero<<" es: "<<factorial<<endl;
    
    system("pause");
    return 0;
}