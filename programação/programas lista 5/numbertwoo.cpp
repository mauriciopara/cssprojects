#include<iostream> 
#include<stdio.h>
using namespace std;

main()
{
float x, p, n, i;
 i=1;
 n=1;
 
 	cout<< "Digite um numero: ";
		cin>>x;
	cout<< "Digite um expoente: ";
		cin>>p;	
if(p>0)
{
 
 while(n<=p)
 {
  i = i * x;
  
  n= n + 1;	
 }
 cout<< "A potencia corresponde a: " <<i;
}
 else
 
 
 {
 	n=-1;
 
 while(n<=p)
 {
  i = i * x;
  
  n= n - 1;	
 }
 i = 1 / i;
 cout<< "A potencia corresponde a: " <<i;
 }
 
	
		
getchar();	
}
