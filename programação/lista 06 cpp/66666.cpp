#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;



main()
{
	int j, i ,x ;

    
    cout<< "Digite o valor das colunas : \n";
    cin>> x;
    int vetor[x];
    int vetor2[x]; 
    cout<< "Já sabe: \n";
    for(i=0; i<x; i++)
    {
    	cout<< i<< "= ";
    	cin>>vetor[i];
	}
    
    j = x-1;
    
    for(i=0;i<=x-1;i++) //valores invertidos para o vetor 2
	{    
        vetor2[i]=vetor[j];
        j--;
       
    }
    
     j=0;
    for(i=0;i<=x-1;i++) //valores do vetor 2 para o vetor 1
	{
       
		vetor[i]=vetor2[j];
        cout<<vetor[i];
        j++;
    }
    
    cout<< "\n";
    system("pause");
}
