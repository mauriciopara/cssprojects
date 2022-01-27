#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
int i, j, l =4, c=4, x=0, z=0;
int M[l][c] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};





for (i=1; i<l; i++)
{
  for(j=0; j<=z; j++)
  {
  	  x = x + M[i][j];
  	  
  }	
  
  z++;
  
}

cout<< "Soma: ";

cout<< x;



cout<<"\n";
system("pause")	;
}

