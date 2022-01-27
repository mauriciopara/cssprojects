#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float indice ( float xpeso, float xaltura, float &teste)
{
	teste = xpeso / pow(xaltura,2);
}

float imckg (float tipo)
{
	if (tipo < 25)
	  return 0;
	  if ((tipo >= 25) && (tipo < 30))
	  return 1;
	    if ((tipo >= 30) && (tipo < 35))
	  return 2;
	   if ((tipo >= 35) && (tipo < 40))
	  return 3;
	  if (tipo >= 40) 
	  return 4;
	  
}



main()
{
	float x, y, tipo,  resultado;
	
	cout<< "Digite seu peso em Kg: \n";
	cin>> x;
	cout<< "Digite sua altura em metros: \n";
	cin>> y;
	
	indice(x, y, tipo);
	
	resultado = imckg (tipo);
	
	cout<< "Seu tipo de obesidade corresponde a: " <<resultado<< ".";
	
	getch();
	
	
}
