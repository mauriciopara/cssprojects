#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
int i;
int c = 8;
int v[c] = {-1,2,3,4,5,6,7,8};

for(i=0; i<c; i++)
{
	v[i] = v[i] * i;
	cout<< v[i] << "\n";
}



cout<<"\n";
system("pause")	;
}
