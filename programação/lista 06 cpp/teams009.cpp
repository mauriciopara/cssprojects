#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

main()
{
	int l = 2, c= 4; 
	int M1[l][c] ={{1,2,3,5},{1,2,3,5}};
	//M1[0][0] = 1;
	//M1[0][1] = 1;
	//M1[0][2] = 1;
	//M1[0][3] = 1;
	//M1[1][0] = 1;
	//M1[1][1] = 1;
	//M1[1][2] = 1;
	//M1[1][3] = 1;

	int M2[l][c] ={{1,2,3,5},{1,2,3,5}};
	//M2[0][0] = 1;
	//M2[0][1] = 1;
	//M2[0][2] = 1;
	//M2[0][3] = 1;
	//M2[1][0] = 1;
	//M2[1][1] = 1;
	//M2[1][2] = 1;
	//M2[1][3] = 1;
	
	int M3[l][c];
	int i,j;
	
	for(i=0; i<l; i++)
	for(j=0; j<c; j++)
	{
	 M3[i][j] = M1[i][j] + M2[i][j];
	}
	
	for(i=0; i<l; i++)
	for(j=0; j<c; j++)
	{
		cout<< M3[i][j]<< "\n";
	}
	
cout<< "\n";
system("pause");

}
