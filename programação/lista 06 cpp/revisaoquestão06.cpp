#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

main()
{
int i, j, x, colunas;
int vetor[colunas];
int percurso[colunas];
x=colunas;
j = x-1;

cout<<"Digite o número de colunas do vetor: \n";
cin>>colunas;

cout<<"Digite o valor da coluna correspondente: \n";

for(i=0; i<x; i++)
{
	cout<< i << "= ";
	cin>>vetor[i];
}

for(i=0; i<x; i++)
{
	percurso[i] =  vetor[j];
	j--;
}

cout<< "O valor convertido corresponde a: \n";

for(i=0; i<x; i++)
{
 vetor[i] = percurso[i];
 cout<< vetor[i];
}



cout<<"\n";
system("pause");
}
