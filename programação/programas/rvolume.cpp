//Programdor: Mauricio Para R. M. de Aguiar Data:29/01/2005
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float volume (float r1)
{
	const float pi=3.141592;
	return ((4*pi*pow(r1,3))/3);
}

main()
{
	float r,v;
	
	cout<< "Digite um valor para o raio da esfera: \n";
	cin>> r;
	v = volume (r);
	cout<< "O volume da esfera :" <<v<< ".";
	
	getch;
}
