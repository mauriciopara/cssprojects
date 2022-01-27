#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

main()
{
ofstream saida;
string nome;
float nota;
int i, fim;

saida.open("Dados.txt");

for(i=1;1;i=i+1)
{
system("cls");

cout<< "Forneca o nome do " <<i<< "o. aluno: ";
scanf("\n");
getline(cin,nome);
saida << "\n" << nome;

cout<< "Forneca a primeira nota do" <<i<< "o. aluno: ";
cin>> nota;
saida << "\n" << nota;

cout<< "Forneca a segunda nota do" <<i<< "o. aluno: ";
cin>> nota;
saida << "\n" << nota;

cout<< "Fim do cadastro??\n";
cout<< "0 -> para nao\n";
cout<< "1 -> para sim\n";
cin>> fim;

if(fim)break;
}
saida.close();
}
	



