#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float segundograu (float a, float b ,float c)
{
	return (pow (b,2) -4*a*c);
}

main()
{
	float a1,b1,c1,d1;
	cout<< "Digite um valor para a : ";
	cin>> a1;
	cout<< "Digite um valor para b : ";
	cin>> b1;
	cout<< "Digite um valor para c : ";
	cin>> c1;
	d1=segundograu(a1,b1,c1);
	cout<< "Delta = " <<d1<< ".";
	getch();
		
	
}

	

