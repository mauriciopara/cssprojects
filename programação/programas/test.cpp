#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float conversor (float g)
{
	float c;
	const float pi = 3.141592;
	c= (pi * g / 180);
	return c;
}

float area (float a1, float b1, float graus1)
{
	float s,radianos;
	radianos= conversor (graus1);
	s =(a1 * b1 * (sin(radianos))/2);
	return s;
}

main()
{
	float a, b, graus, area1;
	
	cout<< "Digite o valor para o lado A: \n";
	cin>> a;
	cout<< "Digite o valor para o lado b: \n";
	cin>> b;
	cout<< "Digite o valor do angulo formado entre eles: \n";
	cin>> graus;
	area1 = area (a,b,graus);
	cout<< "A area do triangulo e" <<area1<< ".";
	
	
	getch();
}

