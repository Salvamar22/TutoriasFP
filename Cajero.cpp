#include "iostream"
using namespace std;
int main(){
    //DECLARACION DE VARIABLES
    int opc, opcDeposito, opcRetiro, opcSaldo;
    float deposito, retiro, saldo_en_cuenta = 100;
    
    //MENU PRINCIPAL
    do
    {
    cout<<"\nBienvenido"<<endl;
    cout<<"\nQue accion desea realizar?\n"<<endl;
    cout<<"1. Depositar dinero."<<endl;
    cout<<"2. Retirar dinero."<<endl;
    cout<<"3. Mostrar saldo"<<endl;
    cout<<"4. Salir."<<endl;
    cout<<"Que desea realizar"<<endl;
    cin>>opc;
    
    //ENTRANDO A MENU PRINCIAPL
    switch (opc)
    {
    case 1: 
    
    do
    {
    //MENU DEPOSITO
    cout<<"\nQue accion desea realizar?\n"<<endl;
    cout<<"1. Depositar dinero."<<endl;
    cout<<"2. Salir."<<endl;
    cin>>opcDeposito;
    switch (opcDeposito)
    {
    case 1:
    cout<<"Digite la cantidad a depositar"<<endl;
    cin>>deposito;
    saldo_en_cuenta += deposito; //saldo_en_cuenta = saldo_en_cuentra + deposito
    cout<<"\nSaldo disponible: "<<saldo_en_cuenta; 
        break;

    case 2:
    break;

    default:
    cout<<"Ingrese un dato valido"<<endl;
        break;
    }  
    }while (opcDeposito != 2);
        break;
        
    case 2:
    do
    {
    //MENU RETIRO
    cout<<"\nQue accion desea realizar?\n"<<endl;
    cout<<"1. Retirar dinero."<<endl;
    cout<<"2. Salir."<<endl;
    cin>>opcRetiro;
    switch (opcRetiro)
    {
    case 1:
    cout<<"Digite la cantidad a retirar: ";
    cin>>retiro;

    if (retiro > saldo_en_cuenta) 
    {
        cout<<"Saldo insuficiente";
    }
    else
    {
        saldo_en_cuenta -= retiro,
        cout<<"\nSaldo disponible: "<<saldo_en_cuenta; 
        break;
        
    }
        break;

    case 2:
    break;
    default:
     cout<<"Ingrese un dato valido"<<endl;
        break;
    }
    } while (opcRetiro != 2);
    break;
    
    case 3: 
    do
    {
    cout<<"\nQue accion desea realizar?\n"<<endl;
    cout<<"1. Mostrar saldo."<<endl;
    cout<<"2. Salir."<<endl;
    cin>>opcSaldo;
    switch (opcSaldo)
    {
    case 1: 
    cout<<"Saldo en cuenta: "<<saldo_en_cuenta<<endl;
    break;

    case 2:
    break;

    default:
    cout<<"Ingrese un dato valido"<<endl;
        break;
    }  
    } while (opcSaldo != 2);
    break;

    case 4: 
    break;
    default:
    cout<<"Ingrese un dato valido"<<endl;
        break;
    }
    } while (opc != 4);

    return 0;
}
