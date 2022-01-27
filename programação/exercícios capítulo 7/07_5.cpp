//tolower
#include<iostream>
#include<conio.h>

using namespace std;

lighttop(char x[])
{
int t; 	
	for( int n=0;  x[n]!='\0'; n++)
	{
	   t = x[n];
	  
	if  (t >= 65 && t<= 90 )
	{
	 
	 t = t + 32 ;
	 x[n]= t;
	 cout<< x[n];	
	}
	else
	cout<< x[n];
    }
	
}




main()
{

char v1[15]={'C','h','o','c','o','l','a','t','e'};


lighttop(v1);

	
	

 


 
	
	
getch();	
}
