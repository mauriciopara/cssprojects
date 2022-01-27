#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
	float x, y, n,i=1;
	
	
	cout<< "      CALCULAR POTENCIA \n\n";
	cout<< "Digite um numero: ";
	cin>>x;
	cout<< "Digite um expoente: ";
	cin>>y;
	
	if(y>0)
	{
		for(n = 1; y>=n; n = n+1)
		{
			i = i * x;
		}
		cout<< "A potencia corresponde a:" <<i;	
	}
	
	if(y<0)
	{

	for(n = -1; y<=n; n = n-1)
	{
	   i = i * x;	
	}
	   
	   i = 1 / i;
	   
	   cout<< "A potencia corresponde a:" <<i;
}
	
	
	
	
	
getchar();	
}
