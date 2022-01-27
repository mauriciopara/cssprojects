#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

main()
{

ifstream leitura;
string nome, pulo;
float nota;	
	
leitura.open("Nomes.txt");

getline(leitura,pulo);

while(!leitura.eof())
{
	getline(leitura,nome);
	cout<< nome << "\n";
	
    leitura >> nota;
	cout << nota <<"\n";
	
	leitura >> nota;
	cout << nota <<"\n";
	
	getline(leitura,pulo);
	
}

leitura.close();	
}
