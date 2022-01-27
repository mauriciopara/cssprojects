//Programdor: Mauricio Para R. M. de Aguiar Data:29/01/2005
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float radianos (float g1)
{
	const float pi=3.141592;
	return ((pi*g1)/180);
}

main()
{
float g,v;

cout<< "Digite o angulo em graus: \n";
cin>> g;
v = radianos (g);
cout<< "Este angulo em radianos corresponde a: \n " <<v<< ".";

getch;
}
