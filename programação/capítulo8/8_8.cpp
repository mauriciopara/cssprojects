#include<iostream>
#include<conio.h>
using namespace std;

struct Tresults {
	int x1, x2, y1, y2, mx, my ;
} geral;

int Tpontos(struct Tresults geral)
{
geral.mx = (geral.x1+geral.x2)/2;


geral.my = (geral.y1+geral.y2)/2;
};

main()
{

	cout<< "Digite um valor para X: \n";
	cin>> geral.x1;
	cout<< "Digite um valor para Y: \n";
	cin>> geral.x2;
	
	
	cout<< "Os valores são, Abscissa: " <<geral.mx<< ", " "ordenada: " <<geral.my<<".";
	
	
	getch();
}
