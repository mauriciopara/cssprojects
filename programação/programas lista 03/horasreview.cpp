#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int corrente ( int valor, int &h, int &m)
{
	h = valor /60;
	m = valor % 60;
}

main()
{
	int valor1, hora, minutos;
	
	cout<< "Digite um valor inteiro, em minutos: \n";
	cin>> valor1;
	
	corrente(valor1, hora, minutos);
	
	cout<< ".\n" "Hora corrente: " <<hora<< ".\n" "Minutos correntes: " <<minutos<< ".";
	
	
	
	getch();
}
