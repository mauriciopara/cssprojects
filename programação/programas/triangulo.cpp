#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float triangulo(float a, float b, float g)
{
	float A;
    A=(a*b*sin(g)/2);
	return(A);	
}
 
 float conversao(float g)
{
	float r;
	const float pi= 3.141592 ;
	return((pi*g)/180);	
	return r;
}
main()
{
	float a1,b1,g1,area,radianos;
	
	cout<< "Digite o valor do primeiro lado : \n";
	cin>>a1;
	cout<< "Digite o valor do segundo lado : \n";
	cin>>b1;
	cout<< "Digite a medida do angulo formado entre os lados: \n";
	cin>>g1;
	area=triangulo(a1,b1,g1);
	radianos=conversao(g1);
	cout<< "A area do triangulo : " <<area<< "." " Graus formados entre os lados em radianos : " <<radianos<< ".";
	getch();
}
