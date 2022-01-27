#include<iostream>
using namespace std;

potencia1(int x, int p)
{
    float n;
    float v;
	
	
	v=1;
	
	if(p>0)
	{
		n = 1;
	while(n<=p)
	{		
		
	  v = v * x;
		
	  n = n + 1;	
	}
}
	if(p<0)
	{
		n= -1;
	while(n<=p)
	{		
		
	  v = v * x;
		
	  n = n - 1;	
	}
}
	return v;	
	
}

main()
{
	int x1,p1,f;
	
	cout<< "Digite um numero: ";
		cin>>x1;
	cout<< "Digite um expoente: ";
		cin>>p1;	
	
	
	
	f = potencia1(x1,p1);
	
	cout<< " A potenciacao corresponde a: " <<f;
	
getchar();	
}


