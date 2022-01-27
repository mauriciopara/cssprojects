#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float segundograu(float a1, float b1, float c1)
{
	return (pow(b1,2)-4*a1*c1);
	
}

main()
{
	float a , b , c , delta;
	cout<< "Digite um valor para a : \n ";
	cin>> a;
	cout<< "Digite um valor para b : \n ";
	cin>> b;
	cout<< "Digite um valor para c : \n ";
	cin>> c;
	delta = segundograu(a,b,c);
	cout<< "Delta = " <<delta<< ".";
	
	getch();
}
