//by: Mauricio 11/11/2020 review
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

void nomeSobrenome(string s, string n) //Atenção
{
  cout<< "Seu correspondente: "	<<s<< ", " <<n<< "." ;
}
main()
{
	string nome, sobrenome; //ATENÇÂO
	
	cout<<"Digite seu nome: \n ";
	getline(cin,nome);
	cout<<"Digite seu sobrenome: \n ";
	getline(cin,sobrenome);
	nomeSobrenome(sobrenome, nome);
	
	getch();
	
}
