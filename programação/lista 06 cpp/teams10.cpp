#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

main()
{
	int i, j, l=2, c=3, z;
	int M2[l][c] = {{1,2,3},{1,2,3}};
	
	//M2[0][0] = 1;
	//M2[0][1] = 1;
//	M2[0][2] = 1;
	//M2[1][0] = 1;
//	M2[1][1] = 1;
	//M2[1][2] = 1;
	
	for(i=0; i<l; i++)
	for(j=0; j<c; j++)
	{
	 z=	z + M2[i][j];
	}
	
	cout<< "Total: " <<z;
	
cout<<"\n";
system("pause");
}
