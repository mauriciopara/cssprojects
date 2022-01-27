#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

float mes (int a1)
{
	if (a1 == 1)
	return 1;
	if (a1 == 2)
	return 2;
	if (a1 == 3)
	return 3;
	if (a1 == 4)
	return 4;
	if (a1 == 5)
	return 5;
	if (a1 == 6)
	return 6;
	if (a1 == 7)
	return 7;
	if (a1 == 8)
	return 8;
	if (a1 == 9)
	return 9;
	if (a1 == 10)
	return 10;
	if (a1 == 11)
	return 11;
	if (a1 == 12)
	return 12;	
}

main()
{


int a;
float c;
cout<< "digite um valor inteiro para a: \n";
cin>>a;

c = (mes(a));

if((mes(a))== 1)
 cout<< "O valor digitado corresponde ao mes de Janeiro.";
if((mes(a))== 2)
 cout<< "O valor digitado corresponde ao mes de Fevereiro.";
 if((mes(a))== 3)
 cout<< "O valor digitado corresponde ao mes de Marco.";
 if((mes(a))== 4)
 cout<< "O valor digitado corresponde ao mes de Abril.";
 if((mes(a))== 5)
 cout<< "O valor digitado corresponde ao mes de Maio.";
 if((mes(a))== 6)
 cout<< "O valor digitado corresponde ao mes de Junho.";
 if((mes(a))== 7)
 cout<< "O valor digitado corresponde ao mes de Julho.";
 if((mes(a))== 8)
 cout<< "O valor digitado corresponde ao mes de Agosto.";
 if((mes(a))== 9)
 cout<< "O valor digitado corresponde ao mes de Setembro.";
 if((mes(a))== 10)
 cout<< "O valor digitado corresponde ao mes de Outubro.";
 if((mes(a))== 11)
 cout<< "O valor digitado corresponde ao mes de Novembro.";
 if((mes(a))== 12)
 cout<< "O valor digitado corresponde ao mes de Dezembro.";


getch();
}
