#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float conversor(float g)
{
	float c;
	const float p1= 3.141592;
	c= (p1 * g / 180);
	return c;
}

float triangulo ( float a1 , float b1 ,  float grau1 )
{
	float t;
	t= ( a1 *b1 * (sin(grau1) )/2);
	return t;
	
}

main()
 {
 	float a , b , r , graus , area;
 	
 	cout<< "Digite o valor do lado a: \n";
 	cin>> a;
 	cout<< "Digite o valor do lado b: \n";
 	cin>> b;
 	cout<< "Digite o valor em graus do angulo formado entre os lados: \n";
 	cin>>r;
 	
	 graus = conversor (r);
	 area = triangulo (a,b,graus);
	 
	cout<< "A area do triangulo e " <<area<< "." ;
	
	getch();
 	
 	
 	
 	
 	

 }
