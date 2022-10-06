#include<iostream>
using namespace std;

int main()
{
	int MAVB_i=0,l;
	float MAVB_x,MAVB_s=0;
	cout<<"ingrese el limite l="; cin>>l;
	do{
		
	cout<<"ingrese el numero x="; cin>>MAVB_x;
	MAVB_i=MAVB_i+1;
	MAVB_s=MAVB_s+MAVB_x;



	}while(MAVB_i<l);
	cout<<"Se ingresaron "<<l<<" numeros "<< "que sumaron "<<MAVB_s<<endl;
	return 0;



}
