//Programador: Mauricio Para R. M. de Aguiar Data:29/01/2005
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float segundograu (float a1,float b1, float c1)
{
	return (pow(b1,2) -4*a1*c1);
}

main()
{
	float a,b,c,d;
	cout<< "Digite um valor para A: \n";
	cin>> a;
	cout<< "Digite um valor para B: \n";
	cin>> b;
	cout<< "Digite um valor para C: \n";
	cin>> c;
	d=segundograu(a,b,c);
	cout<< "Delta= " <<d<< ".";
	
	getch();
	
	

	
}



