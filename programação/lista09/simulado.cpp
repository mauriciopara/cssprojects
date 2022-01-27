#include<iostream>
#include<fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;

	struct Tdados
	{
		string nome;
		float nota1, nota2;		
	};


main()
{

	struct Tdados pessoa;
	ofstream entrada;
	int x, i;
	
	entrada.open("cadastro.txt");
	
	cout<< "Quantos alunos serao cadastrados: ";
	cin>> x;
	
	struct Tdados v[x];
	

	
	for(i=0;i<x;i++)
	{
		system("cls");
		
		cout<< "Forneca o nome do aluno "<<i+1<<" : \n"; 
		scanf("\n");
		getline(cin, pessoa.nome);
		
		cout<< "\nDeclare a primeira nota do aluno "<<i+1<<" : \n";
		cin>>pessoa.nota1;
		
		cout<< "\nDeclare a segunda nota do aluno "<<i+1<<" : \n";
		cin>>pessoa.nota2;
		
		v[i] = pessoa;
			
	}
	
	
	for(i=0;i<x;i++)
	{
		entrada<<"\n"<<v[i].nome;
	    entrada<<"\n"<<v[i].nota1;
	    entrada<<"\n"<<v[i].nota2;
	}
	
	entrada.close();
	
	
	
	};
	
	
	
	
	
	
	

