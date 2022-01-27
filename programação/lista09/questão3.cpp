#include<iostream>
#include<fstream>

using namespace std;

main()
{
ifstream leitura;
ofstream entrada;


string nome, pulo;
float nota;


leitura.open("Dados.txt");

entrada.open("Nuvem.txt");


cout<< "Digite o nome deste novo aluno: ";
getline(cin,nome);
entrada<<"\nNome: "<<nome;

cout<< "Digite a primeira nota: ";
cin>>nota;
entrada<< "\n"<<nota;

cout<< "Digite a segunda nota: ";
cin>>nota;
entrada<< "\n"<<nota;

getline(leitura,pulo);

while(!leitura.eof())
{
	getline(leitura,nome);
	entrada<< "\n"<<nome;
}

leitura.close();

entrada.close();

ofstream origin;
ifstream newest;

origin.open("Dados.txt");
newest.open("Nuvem.txt");


while(!newest.eof())
{
	getline(newest,nome);
	origin<< nome<<"\n";
}

origin.close();
newest.close();
	
}
