#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int numero;

cout<<"Ingrese un numero corzon bello: "; cin>>numero; //siempre hay que tratar al usuario con cariño, saludos a quien revise esto

while (numero != 0)
{
    numero--;
    cout<<"Cuenta regresiva: " <<numero<<endl;
}

    


getch();
    return 0;
}

// g++ ejercicio2.cpp -o ejercicio2
// .\ejercicio2