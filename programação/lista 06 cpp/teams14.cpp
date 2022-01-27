#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

main()
{
int i, j, l=5, c=5;
int a=0, b=0, d=0;
int M[l][c] ={{1,2,3,4,5},{6,7,8,9,1},{1,2,3,4,5},{6,7,8,9,1}, {1,2,3,4,5}};






cout<<"Matriz \n";

for(i=0; i<l; i++)
for(j=0; j<c; j++)
{
cout<<M[j][i];
}
/////////////////////////////////////////////////////////////////////////
  cout<<"\n     SOMAS \n\n";
////////////////////////////////////////////////////////////////////////

cout<<"\n Linha 4M: \n";

for(i=4; i<=4; i++)
for(j=0; j<c; j++)
{
 a = a + M[i][j];
}

cout<< "Corresponde a: " <<a<< "\n";

///////////////////////////////////////////////////////////////////////

cout<<"\n Coluna 2M: \n";

for(i=0; i<l; i++)
for(j=2; j<=2; j++)
{
 b = b + M[i][j];
}

cout<< "Corresponde a: " <<b<< "\n";

//////////////////////////////////////////////////////////////////////

cout<<"\n Diagonal Principal: \n";
 j=0;
for(i=0; i<l; i++)
{
 
 cout<< M[i][j] << "\n";
 j++;
}

/////////////////////////////////////////////////////////////////


cout<<"\n Diagonal Secundaria: \n";
j=4;
for(i=0; i<l; i++)
{
 
 cout<< M[i][j] << "\n";
 j--;
}



cout<<"\n Todos os elementos da Matriz: \n";
	
	for(i=0; i<l; i++)
	for(j=0; j<c; j++)
	{
	 d = d + M[i][j];
	}
	cout<< "Corresponde a: " <<d<< "\n";


	
cout<< "\n";
system("pause");	
}
