#include<bits/stdc++.h>
using namespace std;
int main()
{
	int opcion, cont;
    double gasto, H[100];
    double suma=0;
    int i=0;
    string resp, nombre, user, clave;
    cout<<"BIENVENIDO AL SISTEMA"<<endl;
    cout<<"*********************"<<endl;
    cout<<"USUARIO: "; cin>>user;
    cout<<"CLAVE: "; cin>>clave;
    do
    {
    	cout<<"1. sumar "<<endl;
    	cout<<"2. historial"<<endl;
    	cout<<"0. salir "<<endl;
    	cin>>opcion;
    	switch(opcion)
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
				
				H[i]=suma;
				i++;
				cont++;
				
				break;
			case 2:
				cout<<"HISTORIAL"<<endl;
				cout<<"........."<<endl;
				for(int i=0; i<cont; i++)
				{
					if(H[i]!=0)
					{
						cout<<"suma "<<i+1<<" : "<<H[i]<<endl;	
					}
				}
				break;
			default:
				break;
		}
    }
    while(opcion!=0);
    cout<<"GRACIAS POR USAR NUESTRO SISTEMA DE CALCULOS ";
    return 0;
}
