#include<iostream>
#include<fstream>
using namespace std;

struct Taluno
{
	string nome;
	float nota1, nota2;
};

main()
{
	struct Taluno pessoa;
	ifstream leitura;
	ofstream medias;
	string pulo;
	int i, x=0, denominador=0, soma=0, soma1=0;
	
	leitura.open("cadastro.txt");
	medias.open("MediasWithName.txt");
	
	getline(leitura,pulo);
	while(!leitura.eof())
	{
	getline(leitura, pessoa.nome);
	leitura>> pessoa.nota1;
	leitura>> pessoa.nota2;
	
	x++;
	
	denominador = denominador + 2;
	
	getline(leitura,pulo);
	}
	
	leitura.clear();
	leitura.seekg(0);
	
	struct Taluno v[x];
	
	getline(leitura,pulo);
	for(i=0; i<x; i++)
	{
	getline(leitura, pessoa.nome);
	leitura>> pessoa.nota1;
	leitura>> pessoa.nota2;
	getline(leitura,pulo);
	v[i] = pessoa;
	}
	
	
	for(i=0; i<x; i++)
	{
	soma = soma	+ v[i].nota1;
	soma1 = soma1 + v[i].nota2;
	}
	
	medias << "\nMedia da turma: " <<((soma + soma1)/denominador);
	medias<< "\n____Media__por__Aluno____";
	
	for(i=0; i<x; i++)
	{
		
		medias<< "\n" <<v[i].nome << " : " <<(v[i].nota1 + v[i].nota2)/2; 
		
	}
	
	leitura.close();
	medias.close();
	
	
	
}
