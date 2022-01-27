#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
int i, n, c, l, y, x=0;


cout<< "Digite o valor de linhas: ";
cin>>l;
cout<< "Digite o valor de colunas: ";
cin>>c;

if( l>10 || c>10 )
{
	cout<<"Os valores não podem formar a matriz em questão :p \n";
	
}
else
{

	
int matriz[l][c];
y = l*c;
int vetor[y];

cout<< "Digite o valor de acordo com a coluna e a linha: \n";
for(i=0; i<l; i++)
for(n=0; n<c; n++)
{
	cout<< "[" <<i<< "] [" <<n<< "] =";
	cin>>matriz[i][n];
}
	
	
for(i=0; i<l; i++)
for(n=0; n<c; n++)
{
    vetor[x]  = matriz[i][n];
	
	x++;
}	
	
for(i=0; i<y; i++)
{
	cout<< vetor[i];
}
	
	
cout<<"\n";
system("pause");
}
}
