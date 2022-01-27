#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

main()
{
	int i,c, n, x=12;
	int G[x] ={1,1,1,1,1,1,1,1,1,1,1,1,1};
	int r[x];

	

	
	cout<< "      Apenas valores pre-determinados serão aceitos:\n";
	cout<< "Digite o valor de seu bilete para a coluna correspondente:\n";
	
	for(i=0; i<=x; i++)
	{
		cout<< i << " = ";
		cin>> r[i];
		
	}

   
   for(n=1; n<=x; n++)
   {
   	if(G[n] == r[n])
   	{
	   }
   
   	else
   	{
		cout<< "\n LOSER";   
	    break;	
	}
  	
   }
   
   if(n==13)
   cout<< "CONGRATULATIONS MAN";
   
	 
	 
	cout<< "\n";
	system("pause");	
}
