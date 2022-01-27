#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
int i, j, a=0,b=0;
int l=3, c=2;
int M[l][c] = {{1,2},{3,4},{5,6}};
int M1[c][l];


for(i=0; i<c; i++)
{
    
	for(j=0; j<l; l++)
	{
		
		M1[a][b]=M[i][j];
		a++;
	}
	a=0;
	b++;
}
	


i=0;
cout<< "A matriz transposta corresponde a: \n";
for(i=0; i<c; i++)
for(j=0; j<l; j++)
{
cout<<M1[i][j];
}
	
	
cout<<"\n";
system("pause");	
}
