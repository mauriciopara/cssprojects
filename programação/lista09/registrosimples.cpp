#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

main()
{
ofstream entrada;
string nome;
float nota;
int i, fim;

entrada.open("Dados.txt");
	
	
for(i=1; 1; i++)
{
	system("cls");
	cout<< "Digite o nome do " <<i<<"o. aluno: ";
	scanf("\n");
	getline(cin,nome);
	entrada<< "\nNome: " <<nome;
	
	cout<< "Digite a primeira nota: " ;
	cin>> nota;
	entrada<< "\n" <<nota;
	
	cout<< "Digite a segunda nota: ";
	cin>> nota;
	entrada<< "\n"<< nota;
	
	
	
	
	
	
	cout<< "Fim do registro: ";
	cout<< "\nSim -- 1";	
	cout<< "\nNão -- 0\n";
	cin>> fim;
	
	if(fim)
	break;
	
}	
	
entrada.close();	
	
	
	
	
}
