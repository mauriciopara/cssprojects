#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float valores (float nx, float dx,float ny, float dy, float &ad, float &sub, float &mult, float &div)
{
	ad =  (((nx * dy ) + (ny *dx)) / (dx * dy));
	
	sub = (((nx * dy ) - (ny *dx)) / (dx * dy));
	
	mult = ((nx * ny)/(dx * dy));
	
	div =  ((nx * dy)/(dx * ny));
	
	
}

main()
{
	float n1, d1, n2, d2, adicao, subtracao, multiplicacao, divisao;
	
	cout<< "Digite um valor para o numerador Nx: \n";
	cin>> n1;
	cout<< "Digite um valor para o numerador Dx: \n";
	cin>> d1;
	cout<< "Digite um valor para o numerador Ny: \n";
	cin>> n2;
	cout<< "Digite um valor para o numerador Dy: \n";
	cin>> d2;
	
	valores(n1, d1, n2, d2, adicao, subtracao, multiplicacao, divisao);
	
	cout<< ".\n""Adicao: " <<adicao<< ".\n" "Subtracao: " <<subtracao<< ".\n" "Multiplicacao: " <<multiplicacao<< ".\n" "Divisao: " <<divisao<< ".\n";
	
	
	
	getch();
}
