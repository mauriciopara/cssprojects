#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

main()
{
int  n, i=0, j=0, tam=50;

char v1[tam]={'c','h','o','c','o','l','a','t','e'}; //i
char v2[tam]={'c','h','o','c','o','l','a','t','e'}; //j


for(n=0; v1[n]!='\0'; n++)
{
	i++;			
}
 
for(n=0; v2[n]!='\0'; n++)
{
	j++;			
}

if(j == i)
{
cout<< 0;
}

if(i < j)
{
cout<< -1;
}

if(i > j)
{
cout<< 1;
}
		
	
getch();	
}
