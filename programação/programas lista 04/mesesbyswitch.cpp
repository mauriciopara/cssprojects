#include<iostream>
#include<conio.h>
using namespace std;

void mesesbys ( int &x1)
{
	switch(x1)
	{
		case 1: cout<< "Janeiro";
		break;
		case 2:cout<<"Fevereiro";
		break;
		case 3:cout<<"Marco";
		break;
		case 4:cout<<"Abril";
		break;
		case 5:cout<<"Maio";
		break;
		case 6:cout<<"Junho";
		break;
		case 7:cout<<"Julho";
		break;
		case 8:cout<<"Agosto";
		break;
		case 9:cout<<"Setembro";
		break;
		case 10:cout<<"Otubro";
		break;
		case 11:cout<<"Novembro";
		break;
		case 12:cout<<"Dezembro";
		break;
	}
}
	main()
	{
		int x;
		cout<< "Digite um valor entre 1 a 12: \n";
		cin>> x;
		
		(mesesbys(x));
		
		return 0;
		
		getch();
	}

