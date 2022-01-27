#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

main()
{



int i, Colunas, n;
int vetor1[Colunas];
int vetor2[Colunas];
cout<< "Digite a quantidade de colunas do vetor1: ";
cin>> Colunas;
cout<< "Digite um valor para a coluna correspondente.\n";

for(n=0; n<Colunas; n++)
{
	cout<< n<< " = ";
	cin>> vetor1[n];
}

cout<< "O vetor 2 corresponde a: ";
for(i=0; i<Colunas; i++)
{
	vetor2[i]=vetor1[i];
	cout<< vetor2[i];
	
}
cout<< "\n";
    system("pause");
}
