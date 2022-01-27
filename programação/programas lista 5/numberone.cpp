#include<iostream>
#include<stdio.h>
using namespace std;

tetomk(float x1)
  {
  	int n, i;
  	n=1;
  	i=0;
    while(n<=x1)
    {
      	i= i + 1;
      	
      	n= n +1;
	}
	return i +1;
  }
pisouzi( float x2)

{
	int i=0, n=1;
	while(n<=x2)
	{
		i= i + 1;
      	
      	n= n +1;
	}
	return i;
}



main()
{

float x, t, p;

cout<< "Digite um valor para receber como retorno seu floor e seu ceil: ";
cin>> x;
if(x>0)
{

t=tetomk(x);

p=pisouzi(x);

cout<<" O teto corresponde a: " <<t<< "\n O piso corresponde a: " <<p;



}
else
cout<< "O valor nao e real";

getchar();
}
