#include<conio.h>
#include<iostream>
using namespace std;

main()
{
	int dia, mes, ano;
	char sexo,chefe;
	float salario;
	
	cout<<"Digite o dia de seu nascimento: ";
	cin>>dia;
	cout<<"Digite o mes de seu nascimento: ";
	cin>>mes;
	cout<<"Digite o ano de seu nascimento: ";
	cin>>ano;
	cout<<"Digite o seu sexo atraves da inicial do mesmo, M->masculino F->feminino: ";
	cin>>sexo;
	cout<<"Chefe E o seu cargo correspondente em sua impresa? Responda com S ou N:";
	cin>>chefe;
	cout<<"O valor de seu salário em dolares: ";
	cin>>salario;
	
	cout<< "Data de seu nascimento:" <<dia<< "/" <<mes<< "/" <<ano<<"." " Seu sexo: " <<sexo<< ". " "Voce e chefe em sua impresa: " <<chefe<< " Seu salario: " <<salario<< "." ;
	
	getch();
	
}
