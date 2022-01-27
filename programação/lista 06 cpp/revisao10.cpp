#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
int i, n, soma;
int l=2, c=3;
int m1[l][c] ={{1,2,5},{1,2,5}};

for(i=0; i<l; i++)
for(n=0; n<c; n++)
soma = soma + m1[i][n];

cout<< "A soma de todos os valores corresponde a: " <<soma<< " .";
	
	
cout<<"\n";
system("pause");	
}
