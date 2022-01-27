#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
int x, n;

cout<< "Digite a quantidade de colunas do vetor1 e do vetor 2: \n";
cin>> x;

int vetor1[x];
int vetor2[x];
int vetor3[x];

cout<<"Digite os valores correspondentes as colunas do vetor 1: \n";
for(n=0; n<x; n++)
{
	cout<< n << "= ";
	cin>>vetor1[n];
}
	

cout<<"Digite os valores correspondentes as colunas do vetor 2: \n";
for(n=0; n<x; n++)
{
	cout<< n << "= ";
	cin>>vetor2[n];
}
	
	
	
for( n=0; n<x; n++)
	{
		vetor3[n] = vetor1[n] + vetor2[n] ;
		cout<< vetor3[n];
	}	
	
	
cout<<"\n";
system("pause");	
}
