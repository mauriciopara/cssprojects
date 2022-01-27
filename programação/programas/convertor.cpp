#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float convertor (float graus )
{
	const float pi = 3.141592;
	return (pi * graus / 180);
	
}
 main()
 {
 	
 float g , radianos;
 cout<< "Digite um valor em graus: \n";
 cin>> g;
 radianos=convertor(g);
 cout<< "Seu valor em graus convertido para radianos e : " <<radianos<< "." ;
 
 getch();
 	
 	
 	
 	
 }
