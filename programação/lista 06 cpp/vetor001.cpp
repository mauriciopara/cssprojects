#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;



main()
{
	int vetor[8]={1,2,3,4,5,6,7,8};
    int vetor2[8];  
    int j, i; //controle
    
    j=7;
    for(i=0;i<=7;i++) //valores invertidos para o vetor 2
	{    
        vetor2[i]=vetor[j];
        j--;
    }
    for(i=0;i<=7;i++) //valores do vetor 2 para o vetor 1
	{
        vetor[i]=vetor2[i];
    cout<<vetor[i];
    }
    cout<< "\n";
    system("pause");
}

