#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float volumedaesfera (float raio)
{
	const float pi = 3.141592;
	
	return ((4* pi) * pow(raio,3)/3);
	
}

main()
{
 float  r, volume ;
 
 cout<< "Digite o raio da esfera: \n";
 cin>> r;
 
 volume = volumedaesfera (r);
 
 cout<< "O volume da esfera : " <<volume<< ".";
 








getch();
}
