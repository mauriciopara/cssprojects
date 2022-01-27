#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
 int M, N, c;
 
 cout<< "Imprimir de M ate N: \n";
 
 cout<< "Digite o valor de M e N: \n";
 cin>> M >> N;

 cout<< "Quantas casas deseja pular? \n";
 cin>> c;
 

 if(M>=N)
 while(M>=N)
 {
cout<< M<< "\n";
  M = M-c;
  
 }	


else
while(N<=M)
 {
 	
  cout<< N<< "\n";  
  N = N-c;
  
 }		

	
getchar();	
}
