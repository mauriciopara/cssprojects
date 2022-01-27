#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int grande(int vetor[], int colunas)
{
	int n, maior=0;
	for(n=0; n<colunas; n++)
	{
		if(vetor[n] > maior)
		maior=vetor[n];
	}
	return maior;
}

main()
{
 int i=8;
 int v[i] = {1,5,6,4,5,8,9,34444};
 
 cout<< "O maior numero deste vetor corresponde a: " <<grande(v,i);	
	
cout<< "\n";
system("pause");
}
