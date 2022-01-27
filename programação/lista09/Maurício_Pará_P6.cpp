//MauricioPará 19/05/2021
#include<iostream>
#include<fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;



//// funçao 1

int quantidadeDeRegistros(ifstream &arquivo)
{
	string pulo;
	string name;
	int qtd=0;
	

	getline(arquivo,pulo);

	while(!arquivo.eof())
	{
	
	getline(arquivo,name);
	qtd = qtd+1;
		
	}
	arquivo.clear();
	arquivo.seekg(0);
	return qtd;
}

///////funcao2
void arquivoParaVetor(ifstream &arquivo, string v[], int tamanho)
{
	int i;
	string pulo;
	string name;
	
  
	getline(arquivo,pulo);
	for(i=0; i<tamanho; i++)
	{
		
		getline(arquivo,name );
		v[i] = name;
		
		
	}
	arquivo.clear();
	arquivo.seekg(0);
	
}


void troca(string &s1, string &s2)
{
 string aux;
 aux = s1;
 s1 = s2;
 s2 = aux;
}


void ordena(string v[], int tamanho)
{
 int i, j;
 for (i = 0; i < tamanho-1; i++)
 for (j = i+1; j < tamanho; j++)
 if (v[i] > v[j])
 troca(v[i], v[j]);
 


}












///funçao3


void vetorParaArquivo(ofstream &arquivo, string v[], int tamanho)
{
int i;
string pulo;



for (i=0; i<tamanho; i++)
{
	arquivo<< "\n" <<v[i];
}

	
}



void imprimeArquivo(ifstream &arquivo)
{
	arquivo.clear();
	arquivo.seekg(0);
	string nome;
	string pulo;
	int i;
	
	for(i=0; !arquivo.eof(); i++)
	{
		getline(arquivo,nome);
		cout<<"\n"<<nome;
	}
	
	
}





main()
{
 //Declaração de variáveis não arranjos.
 string s;
 ifstream entrada;
 ofstream saida;
 int i, qtdRegistros;
 //Definição da quantidade de registros no arquivo de entrada.
 entrada.open("Nomes.txt");
 qtdRegistros = quantidadeDeRegistros(entrada);
 
 
 //Declaração do vetor.
 string vetor[qtdRegistros];
 
 //Ordenação no vetor dos nomes contidos no arquivo.
 arquivoParaVetor(entrada, vetor, qtdRegistros);
 ordena(vetor, qtdRegistros);
 entrada.close();
 
 //Criação de um arquivo com os nomes ordenados.
 saida.open("Dados.txt");
 vetorParaArquivo(saida, vetor, qtdRegistros);
 saida.close();
 //Impressão do arquivo recém criado.
 entrada.open("Dados.txt");
 imprimeArquivo(entrada);
 entrada.close();
}
