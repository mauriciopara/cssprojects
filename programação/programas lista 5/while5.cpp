#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
	int x, y, n, i, maior; 
	
	cout<< "Quantos numeros serao fornecidos? ";
	cin>> x;
	i=0;
	
	for(n=1; n<=x; n=n+1)
	{
		cout<< "Digite um Valor: ";
		cin>>y;
		
		i = i + y; 
		
	if(y>maior)
	maior=y;
		
	}
	
    cout<< "\n Soma dos valores: " <<i;
    cout<< "\n Maior dos valores: " <<maior;
	
getchar();	
}
