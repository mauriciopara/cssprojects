#include<iostream>
#include<conio.h>
using namespace std;

struct Position{
	int num;
	char pos;
};

main()
{
	struct Position end;
	cout<< "Nos encontramos novamente... Digite o numero da sua peca:";
	cin>> end.num;
	cout<< "Digite o letra da sua peça: ";
	cin>> end.pos;
	
	int i = end.pos;
	
	if((end.num>=1 && end.num<=8) && ((i>=65 && i<=72)||( i>=97 && i<=104)))
	{
		cout<< " \n      A posicao equivale a: " <<end.pos<<","<<end.num;
	}
	else
	cout<<"     Invalido :,(";
getch();	 
}
