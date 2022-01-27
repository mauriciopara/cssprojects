#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float conversao (float g)
{
	float c;
	const float pi = 3.141592;
	c = (pi*g/180);
	return c;
}

float area1 (float a1, float b1 , float graus1)
{
	float t, radianos;
	radianos = conversao(graus1);
	t = (a1 * b1 * (sin(radianos))/2);
	return t;
	
}

main()
{
	float a, b, graus, area;
	
	cout<< "Digite o valor do lado A: \n";
	cin>> a;
	cout<< "Digite o valor do lado B: \n";
	cin>> b;
	cout<< "Digite o valor do angulo formado entre os lados: \n";
	cin>> graus;
	area = area1 (a,b,graus);
	cout<< "O valor da area e :  " <<area<< "."	;
	
	getch();
	
	
}
