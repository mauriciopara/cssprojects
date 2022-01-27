///apenas letras
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

main()
{
int  t, n, i=0, tam1=11;

char v1[tam1]={'c','h','o','c','o','l','a','t','e','.'};


for(n=0; n<tam1; n++)
{
	
	if  (v1[n] >= 65 && v1[n]<= 90 || v1[n] >= 97 && v1[n] <= 122)
	{
	i++;	
	}
}
 

 cout<< i;
 
	
	
getch();	
}
