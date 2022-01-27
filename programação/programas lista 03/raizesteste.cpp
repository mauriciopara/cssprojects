#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float total ( float a1,  float b1, float c1, float &raiz1 , float &raiz2)
{
	float delta;
	
	delta = (pow(b1,2) - 4 * a1 * c1);
	

	
	raiz1 = (-b1 - sqrt(delta))/(2*a1); //atenção
	
	raiz2 = (-b1 + sqrt(delta))/(2*a1); // the same
	
	
	
	
}

main()
{


float a, b , c , x1, x2;

cout<< "Digite um valor para A: \n";
	cin>> a;
	cout<< "Digite um valor para B: \n";
	cin>> b;
	cout<< "Digite um valor para C: \n";
	cin>> c;
	
	total(a, b , c , x1, x2);
	
	cout<< "As raizes reais X1 e X2, correspodem a: " "\n X1=" <<x1<<  "\n X2=" <<x2<<  ".";

getch();
}

