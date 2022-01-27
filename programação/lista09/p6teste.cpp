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

entrada.open("Nomes.txt");
	
	
for(i=1; i<5; i++)
{
	system("cls");
	cout<< "Digite o nome do " <<i<<"o. aluno: ";
	scanf("\n");
	getline(cin,nome);
	entrada<< "\n"<<nome;
	

	
	
	
	
	

}	
	
entrada.close();	
	
	
	
	
}
