#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

float total (float prof, float comp, float larg, float &volu, float &are)
{
	volu = prof * comp * larg;
	
	are  = comp * larg;
	
}

main ()
{
float p, c, l, volume, area;

cout<< "Declare um valor para a profundidade: \n";
cin>> p;
cout<< "Declare um valor para o comprimento: \n";
cin>> c;
cout<< "Declare um valor para a largura: \n";
cin>> l;

total(p, c, l, volume, area);

cout<< " O volume de a gua armazenado pela piscina: \n" << volume <<  "\n A área de piso a ser substituido: \n" << area << ".";

getch();

}
