#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

main()
{
int i, j, l=3, c=2, a=0, b=0;

int m1[l][c] = {	{1,2},  {3,4},   {5,6}};
int m2[c][l];

for(i=0; i<l; i++)
{
    
   for(j=0; j<c; j++)
   {
   	m2[a][b] = m1[i][j];
   	a++;
   }
   a=0;
   b++;
   
}

for(i=0; i<c; i++)
for(j=0; j<l; j++)	
cout<<m2[i][j];
	
cout<<"\n";
system("pause");	
}

