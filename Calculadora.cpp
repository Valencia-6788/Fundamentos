#include<iostream>
using namespace std;

int main()
{
	float MAVB_x,MAVB_y,MAVB_s,MAVB_m,MAVB_d,MAVB_r;
	
	cout<<"Ingrese en valor de x=:";
	cin>>MAVB_x;
	cout<<"Ingrese en valor de y=:";
	 
	cin>>MAVB_y;
	MAVB_s=MAVB_x+MAVB_y;
	MAVB_m=MAVB_x*MAVB_y;
	MAVB_d=MAVB_x/MAVB_y;
	MAVB_r=MAVB_x-MAVB_y;
	
	cout<<"Las suma de "<<MAVB_x<<" + "<<MAVB_y<<" = "<<MAVB_s<<endl;
	cout<<"Las multiplicacion de "<<MAVB_x<<" * "<<MAVB_y<<" = "<<MAVB_m<<endl;
	cout<<"Las division de "<<MAVB_x<<" / "<<MAVB_y<<" = "<<MAVB_d<<endl;
	cout<<"Las resta de "<<MAVB_x<<" - "<<MAVB_y<<" = "<<MAVB_r<<endl;
	return 0 ;

}
