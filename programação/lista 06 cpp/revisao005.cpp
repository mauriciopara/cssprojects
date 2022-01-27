#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
int i, n=0;
int g[13] = {1,2,1,1,1,1,1,1,1,1,1,1,2};
int r[13];

cout<<"Digite o valor para as colunas correspondentes: \n";

for(i=0; i<13; i++)
{
	cout<< i<< " = ";
	cin>>r[i];
	
	}

for(i=0; i<13; i++)
{
	if(g[i] == r[i])
	{
		n++;
	}
	else
	{
	cout<< "\n Loser";
	break;
}
	
}	
		
if( n == 13)	
cout<<"CONGRATULATIONS MAN !!";
	
	
	
	
	
cout<<"\n";
system("pause");	
}
