//Maurício Pará Roza Muniz de Aguiar. Data:18/11/2020. Avaliação-1
#include<iostream>
#include<conio.h>
using namespace std;

float primeirac ( float x1)
{
	float c1;
	c1 = 5 * (x1 - 32) / 9;
	return c1;
	
}

float segundac (float x2)
{
   float k1;
   k1 = x2 + 273.15;
   return k1;
	
}

void terceirac (float x3, float &sistemai)
{
  float brasil;
  brasil = (primeirac(x3));
   
  sistemai = (segundac(brasil));
			
}

main()
{
	float fahrenheit, celcius, kelvin; 
	
	cout<< "Digite um valor em Fahrenheit: \n";
	cin>>fahrenheit;
	
	celcius = primeirac(fahrenheit);
	terceirac(fahrenheit, kelvin);
	
	
	cout<< ".\n" "O valor digitado, em Fahrenheit, convertido para Celcius corresponde a: " <<celcius<< ".\n" "Fahrenheit convertido para Kelvin corresponde a: " <<kelvin<< ".";
	
	
	
getch();	
}

