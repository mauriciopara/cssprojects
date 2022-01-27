#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int v, x=0, y=1, n;
	cout<< "   Retorna numero da sequencia FIBONACCI \n\n";
	cout<< "Digite uma posicao: ";
	cin>> v;
	
	if(v % 2 == 0)
	{
		for(n = 2; n != v; n= n +2)
		{
		x = x + y;
		y = x + y;
	}
	cout<< "De acordo com a posicao: " <<v<< "\n O valor equivale a:" <<y;
	}
	else
	{
			for(n = 1; n != v; n= n +2)
		{
		x = x + y;
		y = x + y;
	}
	cout<< "De acordo com a posicao: " <<v<< "\n O valor equivale a:" <<x;
	}
	
	
	
	
	
getch();
}
