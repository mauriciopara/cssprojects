#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float distancia (float a1, float a2, float b1, float b2)
{
	return sqrt(  pow ((a1-a2),2)  + pow((b1-b2),2)    );

}
main()
{
	float a, ad , b, bd, dist;
	cout<< "Digite um valor para o ponto xa: \n";
	cin>> a;
	cout<< "Digite um valor para o ponto xb: \n";
	cin>> ad;
	cout<< "Digite um valor para o ponto ya: \n";
	cin>> b;
	cout<< "Digite um valor para o ponto yb: \n";
	cin>> bd;
	
	dist = distancia ( a, ad , b, bd);
	
	cout<< "Distancia sera igual a: " <<dist<< ".";
	
	getch();
	
	
}
