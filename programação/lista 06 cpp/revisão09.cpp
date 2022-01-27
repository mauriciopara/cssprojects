#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
 int i, n;
 int l=2, c=3;
 int m1[l][c] = {{1,2,3},{1,2,3}};
 int m2[l][c] = {{1,2,3},{1,2,3}};
 int m3[l][c];
 
 
for(i=0; i<l; i++)	
for(n=0; n<c; n++)
{
 m3[i][n]	= m1[i][n] + m2[i][n];
}

cout<< "Soma: \n";
for(i=0; i<l; i++)	
for(n=0; n<c; n++)
cout<<m3[i][n];
 
	

	
	
	
	

cout<<"\n";
system("pause");	
}
