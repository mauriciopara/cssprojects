#include <iostream>
#include <conio.h>
using namespace std;

float doixs (float &x1, float &y1)
{
	if ( x1 > y1)
	return x1;
	else
	{
		return y1;
	}
		
}

float treix (float a1, float b1, float c1)
{
	if((a1)> (b1 && c1)) return a1; if((b1)> (a1 && c1))return b1;  if((c1)> (a1 && b1)) return c1; 
}

main()
{
	float x, y, result1, a, b, c, result2;
	cout<< "Digite um valor para X:  \n";
	cin>> x;
	cout<< "Digite um valor para Y ser comparado a X:  \n";
	cin>> y;
	
	result1 = doixs (x, y);
	cout<< "Entre os valores relacionados " <<result1<< " corresponde ao maior \n";
	
	cout<< "Parte dois: \n";
	
	cout<< "Digite um valor para A: \n";
	cin>> a;
	cout<< "Digite um valor para B ser comparado a A: \n";
	cin>> b;
	cout<< "Digite um valor para C ser comparado a A e B: \n";
	cin>> c;
	

	result2 = treix (a,b,c);
	
     cout<< "Entre os valores relacionados " <<result2<< " corresponde ao maior \n";
	
}
