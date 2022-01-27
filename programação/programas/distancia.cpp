#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float distancia1 (float x1, float x2, float y1, float y2)
{
	return (sqrt ( (pow((x1-x2),2))+(pow((y1-y2),2)) ));
}

main()
{
	float xa , xb , ya , yb , distancia;
	
	cout<< "Digite o valor de xa : \n ";
	cin>> xa;
	cout<< "Digite o valor de xb : \n ";
	cin>> xb;
	cout<< "Digite o valor de ya : \n ";
	cin>> ya;
	cout<< "Digite o valor de yb : \n ";
	cin>> yb;
    
	distancia = distancia1(xa , xb , ya ,yb);

	cout<< "A Distancia entre os pontos mencionados e de : " <<distancia<< ".";
	
	getch();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

