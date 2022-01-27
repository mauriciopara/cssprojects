#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

main()
{
	int x, y, z, i, n;
	int vetor1[x], vetor2[y], soma[z];
	
	cout<< "Digite a quantidade de colunas do vetor1: ";
cin>> x;
	cout<< "Digite a quantidade de colunas do vetor2: ";
cin>> y;

cout<< "Vetor1 - Digite um valor para a coluna correspondente.\n";

for(i=0; i<x; i++)
{
	cout<< i<< " = ";
	cin>> vetor1[i];
}

cout<< "Vetor2 - Digite um valor para a coluna correspondente.\n";

for(i=0; i<y; i++)
{
	cout<< i<< " = ";
	cin>> vetor2[i];
}
	
	

z=x+y;	
	  
		
	for( n=0; n<x; n++) //first
	{
	soma[n] = vetor1[n];
	}
	
	

    for(i=0 ; i<y; i++) //first
	{
	soma[n] = vetor2[i];
	n++;
	}	
	
			
	for (i=0; i<z; i++)
	{
	    cout<< soma[i];
	}
	
cout<<"\n";
	system("pause");	
}
