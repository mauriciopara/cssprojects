#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

main()
{
int i, n, l=4, c=4, t=0, soma=0;

int M[l][c];

cout<< "Digite o valor da matriz para sua coluna e linha. \n";

for(i=0;i<l;i++)
for(n=0;n<c;n++)
{
	cout<< "[" <<i<< "][" <<n<< "] =";
	cin>>M[i][n];
}


cout<< "A soma dos elementos abaixo da diagonal principal correspondem a: \n";

for(i=1;i<l;i++)
{

for(n=0;n<=t;n++)
{

soma= soma + 	M[i][n];
}
t++;
}

cout<<soma;
	
cout<<"\n";
system("pause");
}
