#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float convetgraus (float graus)
{
	const float pi = 3.141592;
	
	return ((pi * graus)/180);
}

main()
{
	float g,radianos;
cout<< "Digite um valor em graus:  \n";
cin>> g;

radianos = convetgraus (g);

cout<< "Este valor em radianos corresponde a: " <<radianos<< ".";

getch();

}
