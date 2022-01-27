#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float conversor (float x1, float y1, float x9, float y9, float &a, float &o)
{

	a= (x1+x9)/2;

	

	o= (y1 + y9)/2;
	
	
	
	
}

main()
{
float xi , yi, xf, yf, abscissa, ordenada;

cout<< "Digite um valor para XI: ";
cin>> xi;
cout<< "Digite um valor para XF: ";
cin>> xf;
cout<< "Digite um valor para Yi: ";
cin>> yi;
cout<< "Digite um valor para YF: ";
cin>> yf;

conversor (xi , yi, xf, yf, abscissa, ordenada);



cout<< "O ponto medio abcissa e ordenado, sao respectivamente" <<abscissa<< "e" <<ordenada<< ".";


getch();






}
