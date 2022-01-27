#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float operandos (float x1, float x2, char a1)
{
	float r;
	if ( a1 == '+')
	 {
	   r = x1+x2;
	  return r;
   }
    if ( a1 == '-')
    {
	  r = x1-x2;
	  return r;
}
	if ( a1 == '*')
	{
	  r = x1*x2;
	  return r;
}
	if ( a1 == '/')
	{
	  r = x1 / x2;
	 return r;  
}
	if ( a1 == 'y')
	{
	  r = (x1/2) + (x2 / 2);
	  return r;  
}


	if ( a1 == 'x')
	{
	  r = pow(x1,2) + pow(x2,2);
	 return r;     
	
}
}
main()
{
	float x, y, resultado;
	char a;
	
	cout<< "Digite um valor para o operando X: \n";
	cin>> x;	
	cout<< "Digite um valor para o operando Y: \n";
	cin>> y;
	
	cout<< " + adicao ; - subtracao; * vezes;  / divisao; y (x/2) + (y / 2) ; x potencia de 2 + soma \n Digite um operador: \n";
	cin>> a;
	
	resultado = operandos (x,y,a);
	
	cout<< " A operação corresponde a: " <<resultado<< "."; 
	
	
}
