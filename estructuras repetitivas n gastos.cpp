#include<iostream>
#include<string>
using namespace std;
int main()
{
    int gasto;
    double suma=0;
    string resp, nombre;
    cout<<"BIENVENIDO AL SISTEMA"<<endl;
    cout<<"*********************"<<endl;
    cout<<"Ingrese su nombre: "; cin>>nombre;
    do
    {
        cout<<"Ingrese un gasto: "; cin>>gasto;
        cout<<nombre<<" "<<"desea seguir ingresando gastos (si/no)? : "; cin>>resp;
        suma=suma+gasto;
    }
    while(resp=="si");
    cout<<" gasto total: S/. " <<suma<<endl;
    cout<<"GRACIAS POR USAR NUESTRO SISTEMA DE CALCULOS ";
    return 0;
}
