#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
int i, j, x, n;
int vetor[x];
int vetor2[x];

cout<<"Digite o número de colunas do vetor: \n";
cin>>x;

cout<<"Digite o valor da coluna correspondente: \n";

for(i=0; i<x; i++)
{
cout<< i << " = ";
cin>>vetor[i];
}





cout<< "O valor convertido corresponde a: \n";

j = x-1;

for(i=0; i<x; i++)
{
 vetor2[i] = vetor[j];
 j--;
 
}

for(n=0; n<x; n++)    
{
 vetor[n]=vetor2[n];
 cout<< vetor[n];	
}



cout<< "\n";
system("pause");	
}
