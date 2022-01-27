#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

main()
{
	int i, j, l=2, c=3, z, m, t;
	int M2[l][c];
	
	M2[0][0] = 25;
	M2[0][1] = 5;
	M2[0][2] = 11;
	M2[1][0] = 80;
	M2[1][1] = 10;
	M2[1][2] = 60;
	
	m=0;
	
	for(i=0; i<l; i++)
	for(j=0; j<c; j++)
	{
	 z=	z + M2[i][j];
	 m++;
	}
	
	t = z/m;
	
	cout<< "Total: " <<t;
	
cout<<"\n";
system("pause");
}
