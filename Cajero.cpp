#include "iostream"
using namespace std;
int main()
{   int saldo_en_cuenta = 25, opc;
    float deposito, saldo = 0, retiro;

    cout<<"\nBienvenido"<<endl;
    cout<<"1. Depositar dinero."<<endl;
    cout<<"2. Retirar dinero."<<endl;
    cout<<"3. Salir."<<endl;
    cout<<"Que desea realizar"<<endl;
     cout<<"Saldo en cuenta: "<<saldo_en_cuenta<<endl;
    cin>>opc;
    
    switch (opc)
    {
    case 1: 
    cout<<"Digite la cantidad a depositar"<<endl;
    cin>>deposito;
    saldo = saldo_en_cuenta + deposito;
    cout<<"Saldo disponible: "<<saldo;
        break;
        
    case 2:
    cout<<"Digite la cantidad a retirar: ";
    cin>>retiro;

    if (retiro > saldo_en_cuenta) 
    {
        cout<<"Saldo insuficiente";
    }
    else
    {
        saldo = saldo_en_cuenta - retiro,
        cout<<"\nSaldo disponible: "<<saldo; 
        break;
        
    }
    
    case 3: break;
    }
    
    return 0;
}
