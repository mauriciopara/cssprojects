#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

main()
{
int i, n, soma;

int m[5][5];

cout<<"Digite um valor que corresponde a linha e coluna indicada: \n";
for(i=0; i<5; i++)	
for(n=0; n<5; n++)	
{
cout<< "["<<i<< "]["<<n<< "] =";
cin>> m[i][n];	
}	
	
cout<<"Sua Matriz corresponde a: \n";
for(i=0; i<5; i++)	
for(n=0; n<5; n++)	
{

 cout<< "["<<i<< "]["<<n<< "] =" <<m[i][n]<< "\n";	
 
}


cout<<"\n \n SOMA DA LINHA 4M: ";
soma=0;
for(i=4; i<=4; i++)	
for(n=0; n<5; n++)	
{

 soma = soma + m[i][n];
 
}
cout<<soma;






		
	
cout<<"\n";
system("pause");
}
