#include<time.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

main()
{
int i, j, a=0, b=0;
int l = 4, c =2;
int M[l][c];

    M[0][0] = 1;
	M[0][1] = 2;
	M[1][0] = 3;
	M[1][1] = 4;
	M[2][0] = 5;
	M[2][1] = 6;
	M[3][0] = 7;
	M[3][1] = 8;
	
int M2[c][l];	

for(i=0; i<c; i++)
{
    
	for(j=0; j<l; j++)
	{
		
		M2[a][b]=M[j][i];
		b++;
	}
	a++;
	b=0;
}
	
for(i=0; i<c; i++)
	for(j=0; j<l; j++)
	{
		cout<< M2[i][j];
	}
	
	
	
	
	
cout<<"\n";
system("pause");
}
