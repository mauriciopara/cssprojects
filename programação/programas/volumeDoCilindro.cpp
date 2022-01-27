#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float volumeDoCilindro(float r, float h)
{
	const float pi=3.1415292;
	return (pi*pow(r,2)*h);	
}
main()
{
	float raio,altura,volume;
	cout<< "Digite o raio da base da lata: \n";
	cin>> raio;
	cout<< "Digite a altura da lateral da lata: \n";
	cin>> altura; 
	volume= volumeDoCilindro(raio,altura);
	cout<< "O volume da lata e " <<volume<<".";
	getch();
	
	
}

