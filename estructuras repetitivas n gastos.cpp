#include<iostream>
#include<string>
using namespace std;
int main()
{
	int op;
    double gasto;
    double suma=0;
    string resp, nombre, user, clave;
    cout<<"BIENVENIDO AL SISTEMA"<<endl;
    cout<<"*********************"<<endl;
    cout<<"USUARIO: "; cin>>user;
    cout<<"CLAVE: "; cin>>clave;
    do
    {
    	cout<<"1. sumar "<<endl;
    	cout<<"2. multiplicar "<<endl;
    	cout<<"0. salir "<<endl;
    	cin>>op;
    	switch(op)
    	{
    		case 1:
    			cout<<"Ingrese su nombre: "; cin>>nombre;
    			do
    			{
    				cout<<"Ingrese un gasto: "; cin>>gasto;
    				cout<<nombre<<" "<<"deseas seguir ingresando gastos (si/no) ? : "; cin>>resp;
    				suma=suma+gasto;
				}
				while(resp=="si");
				cout<<" gasto total: S/. " <<suma<<endl;
				break;
			case 2:
				break;
			default:
				break;
		}
    }
    while(op!=0);
    cout<<"GRACIAS POR USAR NUESTRO SISTEMA DE CALCULOS ";
    return 0;
}
