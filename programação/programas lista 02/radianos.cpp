#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float conversao(float g)
{
	const float pi= 3.141592 ;
	return ((pi*g)/180);
	
}

main()
{
	float graus, radianos ;
	cout<< "Digite um valor em graus : \n";
	cin>> graus;
	radianos=conversao(graus);
	cout<< "O o valor em graus e o seguinte em radianos: \n"<<radianos<< ".";
getch();
}

