#include<iostream>
#include<conio.h>
using namespace std;

string meses(int x)
{
	if ((x>0)&&(x<=12))
	{
	if (x==1)
	return "Janeiro";
	if (x==2)
	return "Fevereiro";	
	if (x==3)
	return "Marco";	
	if (x==4)
	return "Abril";	
	if (x==5)
	return "Maio";	
	if (x==6)
	return "Junho";	
	if (x==7)
	return "Julho";	
	if (x==8)
	return "Agosto";	
	if (x==9)
	return "Setembro";	
	if (x==10)
	return "Outubro";	
	if (x==11)
	return "Novembro";	
	if (x==12)
	return "Dezembro";		
	}
	else
	return "Nao ha equivalente. ";
		
}
main()
{
	int x1;
	string result;
	
	cout<< "Digite um valor de 1-12: ";
	cin>>x1;
	
	result=meses(x1);
	
	cout<< "O valor corresponde ao mes de: " <<result<< ".";
	
	
	
	getch();
}
