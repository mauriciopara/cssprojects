#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
int i, n, z, soma=0;
int l=2, c=3;
int M2[l][c] = {{25,5,11},{80,10,60}};



for(i=0; i<l; i++)
{
for(n=0; n<c; n++)
{
soma = soma + M2[i][n];
z++ ;
}
}




cout<< "A media aritimética destes valores corresponde a: " <<soma/z<< " .";
	
	
cout<<"\n";
system("pause");	
}
