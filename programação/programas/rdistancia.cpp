//Programdor: Mauricio Para R. M. de Aguiar Data:29/01/2005
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float distancia (float xa1, float ya1, float xb1, float yb1)
{
 return	(sqrt((pow(xa1-xb1,2))+(pow(ya1-yb1,2)));
}

main()
{
	float xa,ya,xb,yb,d;
	
	cout<<"Digite o valor de Xa: \n";
	cin>> xa;
	cout<<"Digite o valor de Ya: \n";
	cin>> ya;
	cout<<"Digite o valor de Xb: \n";
	cin>> xb;
	cout<<"Digite o valor de Yb: \n";
	cin>> yb;
	d = distancia(xa,ya,xb,yb);
	cout<< "A distancia entre estes pontos e de:" <<d<<".";
	
	getch;
	
	
	
	
	
	
	
}
