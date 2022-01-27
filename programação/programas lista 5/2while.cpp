#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
 int M, N;
 
 cout<< "Imprimir de M ate N: \n";
 
 cout<< "Digite o valor de M e N: \n";
 cin>> M >> N;
 
 if(M>=N)
 {
 
 while(M>=N)
 {
  cout<< M <<"\n";
  M = M-1;
 }	
}
else
{
while(N>=M)
 {
  cout<< N <<"\n";
  N = N-1;
 }
}
	
	
getchar();	
}
