//* 2 estructuras 1. Promedio nota1 , 2 y 3 / 2. Alumno: nombre, sexo, edad
//estan anidadas pidiendole los datos al alumno imprimiendo sus notas y el promedio

#include "iostream"
#include "conio.h"
using namespace std;

struct Promedio
{
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float nota5;
};
struct promedio
{
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float nota5;
};

struct Alumno
{
    char nombre[20];
    char sexo[10];
    int edad;
    struct Promedio promedio;
}alumno1;
struct Alumnos
{
    char nombre[20];
    char sexo[10];
    int edad;
    struct promedio promedios;
}alumno2;

int main()
{
    float promedioTotal;
    float PromedioTotal;
    //Alumno 1
    cout<<"ALUMNO 1"<<endl;
    cout<<"Nombre: "<<endl;
    cin.getline(alumno1.nombre,20,'\n');
    cout<<"Sexo: "<<endl;
    cin.getline(alumno1.sexo,10,'\n');
    cout<<"Edad: "<<endl;
    cin>>alumno1.edad;

    cout<<"\n Calificaciones: \n";
    cout<<"Nota 1: "; cin>>alumno1.promedio.nota1;
    cout<<"Nota 2: "; cin>>alumno1.promedio.nota2;
    cout<<"Nota 3: "; cin>>alumno1.promedio.nota3;
    cout<<"Nota 4: "; cin>>alumno1.promedio.nota4;
    cout<<"Nota 5: "; cin>>alumno1.promedio.nota5;

    promedioTotal = (alumno1.promedio.nota1+alumno1.promedio.nota2+alumno1.promedio.nota3+alumno1.promedio.nota4+alumno1.promedio.nota5)/5;

    //Alumno 2
    cout<<"ALUMNO 2"<<endl;
    cout<<"Nombre: "<<endl;
    fflush(stdin);
    cin.getline(alumno2.nombre,20,'\n');
    cout<<"Sexo: "<<endl;
    cin.getline(alumno2.sexo,10,'\n');
    cout<<"Edad: "<<endl;
    cin>>alumno2.edad;

    cout<<"\n Calificaciones: \n";
    cout<<"Nota 1: "; cin>>alumno2.promedios.nota1;
    cout<<"Nota 2: "; cin>>alumno2.promedios.nota2;
    cout<<"Nota 3: "; cin>>alumno2.promedios.nota3;
    cout<<"Nota 4: "; cin>>alumno2.promedios.nota4;
    cout<<"Nota 5: "; cin>>alumno2.promedios.nota5;

    PromedioTotal = (alumno2.promedios.nota1+alumno2.promedios.nota2+alumno2.promedios.nota3+alumno2.promedios.nota4+alumno2.promedios.nota5)/5;

    cout<<"DATOS ALUMNO 1"<<endl;
    cout<<"Nombre: "<<alumno1.nombre<<endl;
    cout<<"Sexo: "<<alumno1.sexo<<endl;
    cout<<"Edad: "<<alumno1.edad<<endl;
      cout<<"\n Calificaciones 1: \n";
    cout<<"Nota 1: "<<alumno1.promedio.nota1<<endl;
    cout<<"Nota 2: "<<alumno1.promedio.nota2<<endl;
    cout<<"Nota 3: "<<alumno1.promedio.nota3<<endl;
    cout<<"Nota 4: "<<alumno1.promedio.nota4<<endl;
    cout<<"Nota 5: "<<alumno1.promedio.nota5<<endl;
    cout<<"Promedio: "<<promedioTotal<<endl;

    cout<<"DATOS ALUMNO 2"<<endl;
    cout<<"Nombre: "<<alumno2.nombre<<endl;
    cout<<"Sexo: "<<alumno2.sexo<<endl;
    cout<<"Edad: "<<alumno2.edad<<endl;
    cout<<"\n Calificaciones 2: \n";
    cout<<"Nota 1: "<<alumno2.promedios.nota1<<endl;
    cout<<"Nota 2: "<<alumno2.promedios.nota2<<endl;
    cout<<"Nota 3: "<<alumno2.promedios.nota3<<endl;
    cout<<"Nota 4: "<<alumno2.promedios.nota4<<endl;
    cout<<"Nota 5: "<<alumno2.promedios.nota5<<endl;
    cout<<"Promedio: "<<PromedioTotal<<endl;


    getch();
    return 0;

}

