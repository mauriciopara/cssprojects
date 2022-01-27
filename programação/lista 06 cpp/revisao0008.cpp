#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
int i, x, y;
int vetor[x];

cout<<"Digite o número de colunas do vetor: \n";
cin>>x;

cout<<"Digite o valor da coluna correspondente: \n";

for(i=0; i<x; i++)
{
cout<< i << " = ";
cin>>vetor[i];
}

cout<< "O valor convertido corresponde a: \n";
x=y;
for(i=0; i<y; i++)
{
cout<< vetor[x];
x--;
}



cout<< "\n";
system("pause");	
}
