#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

main()
{
int i=0, j=0, a, b;
int l = 3, c =2;
int M[l][c];

    M[0][0] = 1;
	M[0][1] = 2;
	M[1][0] = 3;
	M[1][1] = 4;
	M[2][0] = 5;
	M[2][1] = 6;
	
int M2[c][l];	

for(i=0; i<c; i++)
{
    
	for(j=0; j<l; l++)
	{
		
		M2[a][b]=M[i][j];
		a++;
	
	}
	a=0;
	b++;
}
	
for(i=0; i<2; i++)
	for(j=0; j<3; j++)
	{
		cout<< M2[i][j];
	}
	
	
	
	
	
cout<<"\n";
system("pause");
}
