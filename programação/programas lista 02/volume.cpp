#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float modulo(float r)
{
	const float pi= 3.141592 ;
	return (4*pi*(pow(r,3))/3);
	
}

main()

{
	float raio, volume;
	cout<< "Digite o raio de uma esfera : ";
	cin>> raio;
	volume=modulo(raio);
	cout<< "O volume desta esfera e : " <<volume<< ".";
	getch();
}

