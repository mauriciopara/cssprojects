#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float conversor(float g)
{
	float c;
	const float pi= 3.141592;
	c= (p1 * g / 180);
	return c;
}

float area ( float a1 , float b1 ,  float graus1 )
{
	float s,radianos;
	radianos= conversor(graus1);
	s= ( a1 *b1 *(sin(radianos))/2);
	return s;
	
}

main()
 {
 	float a , b , graus, area1;
 	
 	cout<< "Digite o valor do lado a: \n";
 	cin>> a;
 	cout<< "Digite o valor do lado b: \n";
 	cin>> b;
 	cout<< "Digite o valor em graus do angulo formado entre os lados: \n";
 	cin>>graus;
 	
	 area1 = area(a,b,graus);
	 
	cout<< "A area do triangulo e " <<area1<< "." ;
	
	getch();
 	
 	
 	
 	
 	

 }
