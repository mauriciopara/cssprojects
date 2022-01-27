#include<iostream>
#include<conio.h>
using namespace std;

float duas(float &a1, float &b1)
{
	if(a1>b1)
	 return a1;
	else
	 return b1; 
		
}

float tres(float x1, float y1, float z1)
{
	if ((duas(x1,y1))>z1)
	return duas(x1,y1);
	else
	return z1;
	
	
}
main()
{

float a, b, x, y, z, result1, result2;
	cout<< "Digite um valor para A:  \n";
	cin>> a;
	cout<< "Digite um valor para B ser comparado a A:  \n";
	cin>> b;
	
	result1 = duas(a,b);
	cout<< "Entre os valores relacionados " <<result1<< " corresponde ao maior \n";
	
	cout<< "Parte dois: \n";
	
	cout<< "Digite um valor para X: \n";
	cin>> x;
	cout<< "Digite um valor para Y ser comparado a X: \n";
	cin>> y;
	cout<< "Digite um valor para Z ser comparado a X e Y: \n";
	cin>> z;
	

	result2=tres(x,y,z);
	
     cout<< "Entre os valores relacionados " <<result2<< " corresponde ao maior \n";
     
getch();
}
     
