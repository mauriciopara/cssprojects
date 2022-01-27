#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;



main()
{
	int n, x, j, i;
	int vetor1[x];
	int inverso[x];
	j=x-1;
	
cout<< "Digite a quantidade de colunas do vetor1: ";
cin>> x;
cout<< "Digite um valor para a coluna correspondente.\n";

for(n=0; n<x; n++)
{
	cout<< n<< " = ";
	cin>> vetor1[n];
}

for(i=0; i<x; i++)
	{
		inverso[i]=vetor1[j];
		j--;
	}
	
	
for(i=0; i<x; i++)
	{
		vetor1[i]=inverso[i];
	}



cout<<"O valor invertido corresponde a ;) \n";
for(n=0; n<x; n++)
{
	cout<< vetor1[n];
}


    
	
	
cout<< "\n";
    system("pause");	
}
