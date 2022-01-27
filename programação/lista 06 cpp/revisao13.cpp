#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

main()
{
int i, n,z, soma;
int M[4][4]= {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};	

for(i=1;i<4;i++)
{
  for(n=0;n<=z;n++)
  {
  	soma = soma + M[i][n];
  }	
  z++;
}
	
cout<< "Soma: ";

cout<< soma;	
	
cout<<"\n";
system("pause");	
}
