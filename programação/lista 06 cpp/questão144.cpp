#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

main()
{
int i, n, soma;


int m[5][5] = {{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3},{4,4,4,4,4},{5,5,5,5,5}};

//cout<<"Digite um valor que corresponde a linha e coluna indicada: \n";
//for(i=0; i<5; i++)	
//for(n=0; n<5; n++)	
//{
//cout<< "["<<i<< "]["<<n<< "] =";
//cin>> m[i][n];	
///}	
	
cout<<"Matriz \n";

for(i=0; i<5; i++)
for(n=0; n<5; n++)
{
cout<< "["<<i<<"]["<<n<<"] = "<<m[i][n]<<" ";
}
///////////////////////////////////////////////////
cout<<"\n \n SOMA DA LINHA 4M: ";
soma=0;
for(i=4; i<=4; i++)	
for(n=0; n<5; n++)	
{

 soma = soma + m[i][n];
 
}
cout<<soma;

//////////////////////////////////////////////////
cout<<"\n \n SOMA DA COLUNA 2M: ";

int soma1=0;
for(i=0; i<=5; i++)	
for(n=2; n<=2; n++)	
{

 soma1 = soma1 + m[i][n];
 
}
cout<<soma1;

/////////////////////////////////////////////////
cout<<"\n \n SOMA DA DIAGONAL P: ";
soma =0;

for(i=0; i<=4; i++)	
for(n=0; n<=4; n++)	
{
if(i==n)
{
	soma = soma + m[i][n];
	}	
}		

cout<<soma;

/////////////////////////////////////////////////
cout<<"\n \n SOMA DA DIAGONAL S: ";
soma =0;

for(i=0; i<=4; i++)	
for(n=0; n<=4; n++)	
{
if(i+n == 4)
{
	soma = soma + m[i][n];
	}	
}		

cout<<soma;


/////////////////////////////////////////////////
cout<<"\n \n SOMA TOTAL: ";
soma =0;

for(i=0; i<5; i++)	
for(n=0; n<5; n++)	
{


	soma = soma + m[i][n];
		
}		

cout<<soma;



	
cout<<"\n";
system("pause");
}
