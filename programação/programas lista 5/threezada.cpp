#include<iostream>
using namespace std;

main()
{
	int n, y, z,x;
	n=1;
	do
	{
	cout<< "Digite um valor:";
	cin>> x;	
	y = x/1;
	z = x/x;
	n = n+1;	
	}
	while(n<1);
	if( y==x || z==1)
	cout<<"Verdadeiro";
	else
	cout<< "false";
	
	getchar();
}


