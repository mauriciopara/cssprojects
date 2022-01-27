#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float segundograu (float a1, float b1, float c1)
{
  return (pow(b1,2) - 4 * a1 * c1); // return expressão entre ()...
}

main()
{
	float a,b,c,d;
	
	cout<< "Digite um valor para A: ";
	cin>> a;
	cout<< "Digite um valor para B: ";
	cin>> b;
	cout<< "Digite um valor para C: ";
	cin>> c;
	d=segundograu(a, b, c); // relacionar apenas os id recebidos.
	 
    cout<< "O valor de delta: "  <<d<< ".";
    
	
	getch();
	
}
