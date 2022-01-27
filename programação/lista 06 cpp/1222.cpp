#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

main()
{
int i, n, l=3, c=2, a, b;
int vetor[3][2] = {{1,2},{3,4},{5,6}};
int vetor2[2][3];
a=0;
b=0;

for(i=0; i<3; i++)
{
	for(n=0; n<2; n++)
	{
		vetor2[a][b] = vetor[i][n];
	
		a++;
	
	}
	a=0;
	
	b++;
}


	
for(i=0; i<c; i++)
{
for(n=0; n<l; n++)	
{
cout<< vetor2[i][n];
}

}
	
	
	
	
	
	
	
	
	
	
cout<<"\n";
system("pause");	
}
