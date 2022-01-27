#include<iostream>
#include<stdio.h>
using namespace std;

supra(int x, int e)
{
	int n, i;
	n=1;
	i=1;
	
do
{
	i=i * x;
	n=n+1;
}
while(n<=e);

return i;	
}

pagani(int x, int e)
{
	int n, i;
	n=1;
	i=1;
	
do
{
	i=i * x;
	n=n+1;
}
while(n<=e);

return i;	
}



main()
{
 int x1, e1;
 float r;
 
 cout<< " Digite um valor para o numero: ";
 cin>> x1;
 cout<< "\n Digite um valor para o exponte: ";
 cin>> e1;
 
 r = supra(x1,e1);
	
cout<< "\n A potencia corresponde a: "	<<r;
	
getchar();
}
