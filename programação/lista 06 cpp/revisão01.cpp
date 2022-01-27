#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

main()
{
	int i, colunas, n;
	int vetor[colunas];
	int vetor2[colunas];
	
	cout<< "Digite a quantidade de colunas do Vetor1: \n";
	cin>>colunas;
	cout<< "Digite o valor correspondente para cada coluna: \n";
	
	for(i=0; i<colunas; i++)
	{
		cout<< i<< "= ";
		cin>>vetor[i];
	}
	
	cout<< "O vetor 2 corresponde a: ";
	for(n=0; n<colunas; n++)
	{
		vetor2[n] = vetor[n];
		cout<< vetor2[n];
	
	}
	
	
	
	cout<<"\n";
	system("pause");
	
	
}
