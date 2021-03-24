#include "iostream"
using namespace std;

int main()
{
     
     //Operadores suma, resta, multiplicación, division...
    float a,b;
    float sum, subtraction, multiplication, division;
    float results;

    // Pedir al usuario los datos
    cout<<"Digite su primer numero"<<endl;
    cin>>a;
    cout<<"Digite su segundo numero"<<endl;
    cin>>b;

    // Operadores
    sum = a+b;
    subtraction = a-b;
    multiplication = a*b;
    division = a/b;
    results = (a/b)+1;

    // Mostrar los datos
    cout<<"El resultado de la suma es: "<<sum<<endl;
    cout<<"El resultado de la resta es: "<<subtraction<<endl;
    cout<<"El resultado de la multiplicacion es: "<<multiplication<<endl;
    cout<<"El resultado de la division es: "<<division<<endl;
    cout<<"El resultado de la operacion es: "<<results<<endl;
    
    //Auxilar
    int numero1,numero2,aux;
    cout<<"Digite su primer numero"<<endl;
    cin>>numero1;
    cout<<"Digite su segundo numero"<<endl;
    cin>>numero2;
    aux = numero1;
    numero1 = numero2;
    numero2 = aux;
    cout<<"El nuevo valor de x es: "<< numero1 <<endl;
    cout<<"El nuevo valor de x es: "<< numero2 <<endl;

    return 0;
}
