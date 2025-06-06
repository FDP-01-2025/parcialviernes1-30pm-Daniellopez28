#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int dias;

cout<<"Ingrese un numero del 1 al 7: "; cin>>dias; //no se me ocurrio otra forma xd saludos a quien revise esto

if (dias == 1)
{
    cout<<"\n Tu dia es laboral es Lunes ";
}else if(dias == 2)
{
        cout<<"\n Tu dia es laboral es Martes ";

}else if(dias == 3)
{
        cout<<"\n Tu dia es laboral es Miercoles ";

}else if(dias == 4)
{
        cout<<"\n Tu dia es laboral es Jueves ";

}else if(dias == 5)
{
        cout<<"\n Tu dia es laboral es Viernes ";

}else if(dias == 6)
{
        cout<<"\n Tu dia es no es laboral es Sabado ";

}else if(dias == 7)
{
        cout<<"\n Tu dia es no es laboral es Domingo ";

}else{
cout<<"Ese dia no existe persona hermosa ";

}



getch();
    return 0;
}

// g++ ejercicio1.cpp -o ejercicio1
//.\ejercicio1