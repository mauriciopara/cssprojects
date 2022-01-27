#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
int x, n,i,y;

cout<< "Retorna a soma dos numeros naturais ate o valor desejado. \n \n";
cout<< "Valor natural desejado: ";
cin>> x;

i=0;
n=1;
if(x>0)
{

while(n<=x)
{
	i=i +n;
	
	n=n+1;
}
cout<<	"A soma corresponde a: " <<i;
}
else
cout<< "O valor digitado nao e natural.";	
	

	
getchar();	
}
