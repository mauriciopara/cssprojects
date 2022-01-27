//Adicionar em registro

#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;


main()
{
ofstream add;
string nome;
float nota;

add.open("Registro.txt");

cout<< "Digite o nome deste outro aluno: ";
getline(cin,nome);
add<<"\nNome: "<<nome;

cout<< "Digite a primeira nota: ";
cin>>nota;
add<< "\n"<<nota;

cout<< "Digite a segunda nota: ";
cin>>nota;
add<< "\n"<<nota;


getch();
}
