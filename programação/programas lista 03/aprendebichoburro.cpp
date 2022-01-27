#include<iostream>
#include<conio.h>
using namespace std;

float xbox (float x1,float x9,float y1,float y9, float &ps4, float &nintendin)
{
	ps4= (x1+x9)/2;
	nintendin= (y1+y9)/2;
	
}

main()
{
	float xi, xf, yi, yf, aprende, fdp;
	cout<< "Digite um valor para Xi, porra!!: \n";
	cin>> xi;
	cout<< "Digite um valor para Xf, porra!!: \n";
	cin>> xf;
	cout<< "Digite um valor para yi, porra!!: \n";
	cin>> yi;
	cout<< "Digite um valor para yf, porra!!: \n";
	cin>> yf;
	
	xbox(xi, xf, yi, yf, aprende, fdp);
	
	cout<< "Os valores são, Abscissa: " <<aprende<< ", " "ordenada: " <<fdp<< ".";
	
   getch();
	
	
	
}
