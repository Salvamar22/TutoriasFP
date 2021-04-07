/*La calificacion final de un estudiante es el promedio de tres notas: la nota de practicas que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de participacion que cuenta el 10% restante. Escriba un programa que lea las tres notas del alumno y escriba su nota final.*/


#include "iostream"
using namespace std;
int main(){
    float practica, teorica, participacion, total;

    cout<<"Ingrese su nota practica."<<endl;
    cin>>practica;
    cout<<"Ingrese su nota teorica."<<endl;
    cin>>teorica;
    cout<<"Ingrese su nota participacion."<<endl;
    cin>>participacion;

    practica = practica * 0.30;
    teorica *= 0.60;
    participacion *= 0.10;

    total = practica + teorica + participacion;

    cout<<"En su nota practica obtuvo: "<<practica<<" puntos."<<endl;
    cout<<"En su nota teorica obtuvo: "<<teorica<<" puntos."<<endl;
    cout<<"En su nota participacion obtuvo: "<<participacion<<" puntos."<<endl;

    cout<<"Su nota total es: "<<total<<"."<<endl;


    return 0;


}