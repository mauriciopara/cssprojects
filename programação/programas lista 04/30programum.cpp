#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

void operadores(float a1, float b1, char x1, float &c)
{

	
	if(x1=='+')
	{
	c = a1+b1;

    }
	if(x1=='-')
	{
	c = a1-b1;

    }
    if(x1=='/')
	{
	c = a1/b1;

    }
    if(x1=='*')
	{
	c = a1*b1;

    }
    if(x1==':')
	{
	c = a1+(pow(b1,2));

    }
    if(x1=='x')
	{
	c = (a1+b1)/2;

    }
	if(x1=='X')
	{
	c = ((fabs(a1))+(fabs(b1)));
	
    }
}
main()
{
	float a, b,result;
	char x;
	
	cout<< "Digite um valor para A:";
	cin>>a;
	cout<< "Digite um valor para B:";
	cin>>b;
	cout<< "Digite um valor para o Operando, sendo eles + , * , - , / , x, :, e X :";
	cin>>x; 
	
operadores(a,b,x,result);
	
	cout<< "A operacao corresponde a:" <<result<< ".";
	
	
	
	getch();
}

