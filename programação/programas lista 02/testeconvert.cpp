#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float conversor(float g)
{
 
	const float pi = 3.141592;
	
	return ( (pi * g )/180);

}

float areatriangulo(float omega, float a1, float b1)
{
     float radianos;
	
	radianos = conversor (omega);
	
     return (a1 * b1 * sin (radianos)/2);

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
 	
 	area = areatriangulo (graus, a, b);
 	
 	cout<< "O valor da area deste triangulo corresponde a:" <<area<< ".";
 	
 	getch();
 	
}
