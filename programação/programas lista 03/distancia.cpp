#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float distancia (float x1,float x2,float y1,float y2, float &a, float &o )
{
	a = (x1 + x2)/2;
	
	o = (y1 + y2)/2;
	
}

main()
{
	float xi, xf, yi, yf, abscissa, ordenada;
	cout<< "Digite um valo para XI: \n";
	cin>>xi;
	cout<< "Digite um valo para XF: \n";
	cin>>xf;
	cout<< "Digite um valo para YI: \n";
	cin>>yi;
	cout<< "Digite um valo para YF: \n";
	cin>>yf;
	
	distancia(xi, xf, yi, yf, abscissa, ordenada);
	
	cout<< "O valor para a abscissa do ponto medio corresponde a: " <<abscissa<< ", a ordenada do ponto medio corresponde a: " <<ordenada<< ".";
	
	
	
}
