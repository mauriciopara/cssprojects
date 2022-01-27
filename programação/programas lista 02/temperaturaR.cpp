#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float conversor (float c)
{
	return (1.8 * c + 32 );
}

main()
{
	float celcius, fahrenheit;
	
	cout<< "Digite uma temperatura em Celcius : \n ";
	cin>> celcius;
	fahrenheit= conversor(celcius);
	cout<< "Sua temperatura em Celcius conevertida para Fahrenheit e " <<fahrenheit<< ".";
	
	getch();
		
}
