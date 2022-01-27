#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float volumeDaesfera(float r)
{
	const float pi=3.1415292;
	return (4*pi*(pow(r,3))/3);	
}
main()
{
	float raio,volume;
	cout<< "Digite o raio da esfera: \n";
	cin>> raio;

	volume= volumeDaesfera(raio);
	cout<< "O volume da esfera e " <<volume<<".";
	getch();
	
	
}
