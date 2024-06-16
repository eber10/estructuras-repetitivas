#include<iostream>
#include<string>
using namespace std;
int main()
{
int gasto;
double suma=0;
string resp;
do
{
cout<<"Ingrese un gasto: "; cin>>gasto;
cout<<"Desea seguir ingresando gastos (si/no)? : "; cin>>resp;
suma=suma+gasto;
}
while(resp=="si");
cout<<" gasto total: S/. " <<suma;
return 0;
}
