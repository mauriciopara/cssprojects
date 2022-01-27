#include<iostream>
#include<fstream>
using namespace std;

main()
{
ofstream saida;
string nome;
float nota;


saida.open("Dados.txt", ios::app);


cout<< "Forneca o nome do aluno: ";
scanf("\n");
getline(cin,nome);
saida << "\n" << nome;

cout<< "Forneca a primeira nota do aluno: ";
cin>> nota;
saida << "\n" << nota;

cout<< "Forneca a segunda nota do aluno: ";
cin>> nota;
saida << "\n" << nota;



saida.close();
}
