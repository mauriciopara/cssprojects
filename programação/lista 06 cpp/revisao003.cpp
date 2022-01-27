#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
int x, n, y, i, z;

cout<< "Digite a quantidade de colunas do vetor1: \n";
cin>> x;
cout<< "Digite a quantidade de colunas do vetor2: \n";
cin>> y;

int vetor1[x];
int vetor2[x];
z = x + y;
int vetor3[z];

cout<<"Digite os valores correspondentes as colunas do vetor 1: \n";
for(n=0; n<x; n++)
{
	cout<< n << "= ";
	cin>>vetor1[n];
}
	

cout<<"Digite os valores correspondentes as colunas do vetor 2: \n";
for(n=0; n<y; n++)
{
	cout<< n << "= ";
	cin>>vetor2[n];
}
	
for( n=0; n<x; n++) //first
	{
	vetor3[n] = vetor1[n];
	
	}
	
	

for(i=0 ; i<y; i++) //first
	{
	vetor3[n] = vetor2[i];
	n++;
	}	
	
	
	
for( n=0; n<z; n++)
	{
		cout<< vetor3[n];
	}	
	
	
cout<<"\n";
system("pause");	
}
