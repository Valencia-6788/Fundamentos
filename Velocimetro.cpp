#include<iostream>
using namespace std;

int main()
{
	float MAVB_v,MAVB_d,MAVB_t;
	cout<<"Ingrese la distancia(en km) d= "; cin>>MAVB_d;
	cout<<"Ingrese el tiempo(en horas)  t= "; cin>>MAVB_t;
	MAVB_v=MAVB_d/MAVB_t;
	cout<<"La velocidad calculada es de v= "<<MAVB_t<<endl<<endl;
	return 0;



}
