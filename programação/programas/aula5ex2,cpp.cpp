//by Maurício Pará 12/11/2020
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float conversao (float c1)
{
	return (1.8 * c1 + 32);
}

main()
{
	float c,f;
	
	cout<< "Digite uma temperatura em Celcius: \n";
	cin>> c;
	
	f=conversao(c);
	
	cout<< "O valor em Fahrenheit corresponde a: "<<f<<".";
	
	getch();
}
