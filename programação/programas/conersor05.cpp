#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float conversor(float g)
{
	float c;                
	const float pi = 3.141592;
	c = ( (pi * g )/180);
	return c;
}

float areatriangulo(float omega, float a1, float b1)
{
	float t, radianos;            
	
	radianos = conversor (omega);
	
	t = (a1 * b1 * sin (radianos)/2);
	return t;
}

main()
{
float a, b, graus, area;
	cout<< "Digite um valor para o lado A: \n";
 	cin>> a;
 	cout<< "Digite um valor para o lado B: \n";
 	cin>> b;
 	cout<< "Digite, em graus, um valor para o angulo formado entre os lados: \n";
 	cin>> graus;
 	
 	area = areatriangulo (graus, a, b);  //ordem de acordo com os ids de area triangulo
 	
 	cout<< "O valor da area deste triangulo corresponde a:" <<area<< ".";
 	
 	getch();
 	
}
