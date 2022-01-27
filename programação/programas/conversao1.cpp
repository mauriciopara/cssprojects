#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
 
 float conversao (float omega)
 {
 	float c;
	const float pi = 3.141592;
 	c = (pi * omega  /180);
 	return c;
 }
 
 float areatriangulo (float o1, float a1, float b1)
 {
   float s, radianos;
   radianos = conversao(o1);
   s = (a1 * b1 * sin(radianos)/2);
   return s;
    
 }
 
 main()
 {
 	float a, b, o, area;
 	
 	cout<< "Digite um valor para o lado A: \n";
 	cin>> a;
 	cout<< "Digite um valor para o lado B: \n";
 	cin>> b;
 	cout<< "Digite, em graus, um valor para o angulo formado entre os lados: \n";
 	cin>> o;
 	
 	area= areatriangulo(o, a, b);
 	
 	cout<< "O valor da area deste triangulo corresponde a:" <<area<< ".";
 	
 	getch();
 }
