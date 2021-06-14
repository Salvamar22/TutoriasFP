//Funciones por referencia
 
 #include "iostream"
 #include "conio.h"
 using namespace std;
 void ValorNuevo(int&, int&);

 /*int main()
 {
     int num1, num2;

     cout<<"Digite 2 numeros: "<<endl;
     cin>>num1>>num2;

    ValorNuevo(num1,num2);
 
     cout<<"El nuevo valor del primer numero es: "<<num1<<endl;
     cout<<"El nuevo valor del segundo numero es: "<<num2<<endl;
     getch();
     return 0;
 }

 void ValorNuevo(int& xnum, int& ynum)
 {
     cout<<"El valor del primer numero es: "<<xnum<<endl;
     cout<<"El valor del segundo numero es: "<<ynum<<endl;

     xnum = 30;
     ynum = 28;

 }*/
 //vamos sumar y a multiplicar 2 valores

 /*void calular(int, int, int&, int&);
 int main()
 {
     int num1, num2, suma , multiplicacion;

        cout<<"Digite 2 numeros: "<<endl;
        cin>>num1>>num2;

        calular(num1,num2,suma,multiplicacion);       

        cout<<"El valor de la suma es: "<<suma<<endl;
        cout<<"El valor de la multiplicacion es: "<<multiplicacion<<endl;

        getch();
        return 0;
 }
 
 void calular(int num1, int num2, int& suma, int& multiplicacion)
 {
     suma = num1 + num2;
     multiplicacion = num1 * num2; 
 }*/

/*void intercambiar (int&, int&);
 int main ()
 {
     int num1, num2;
     cout<<"Ingrese el valor del primer numero"<<endl;
     cin>>num1;
     cout<<"Ingrese el valor del segundo numero"<<endl;
     cin>>num2;

    cout<<"El valor del #1 es: "<<num1<<endl;
    cout<<"El valor del #2 es: "<<num2<<endl;

    intercambiar(num1,num2);
    
    cout<<"El nuevo valor del #1 es: "<<num1<<endl;
    cout<<"El nuevo valor del #2 es: "<<num2<<endl;

     getch();
    return 0;
 }
 
 void intercambiar (int& num1, int& num2)
 {
  int aux; 

  aux = num1;
  num1 = num2;
  num2 = aux;   
 }*/ 

 //Funcion de tiempo respecto a horas, minutos y segundos 
void tiempo (int, int&, int&, int&);
int main()
 {
     int seg, horas, min, segundos;

     cout<<"Digite cuantos segundos desea: ";
     cin>>segundos;

     tiempo(segundos,horas,min,seg);
     cout<<"Tiempos equivalente a la cantidad de segundos: "<<endl;
     cout<<"Horas: "<<horas<<endl;
     cout<<"Minutos: "<<min<<endl;
     cout<<"Segundos: "<<seg<<endl;
     getch();
    return 0;
 }
 void tiempo(int segundos, int& horas, int& min, int& seg)
 {
     horas = segundos/3600;
     segundos %= 3600;
     min = segundos/60;
     seg = segundos%60;

 }