#include<iostream>
#include<conio.h>
using namespace std;

int divisivel(int a1, int b1)
{
	int result;
	a1 % b1 == result;
	
	if(result == 0)
	  return 1;
    else
	  return 0;
	
}

int imparpar(int &a2)
{
    if( a2 % 2 == 0)
	return 1;
	else
	return 0;
}

int imparpare(int &b2)	
{

	if( b2 % 2 == 0)
	return 1;
	else
	return 0;
	
		
}

main()
{
  int a, b;
  
  cout<< "Digite um valor para a: ";
  cin>> a;
  cout<< "Digite um valor para b: ";
  cin>> b;
  
if((divisivel(a,b))==1)
   cout<< "\n O valor de A e divisivel por B. ";
else
   cout<< "\n O valor de A nao e divisivel por B. ";
   
  if((imparpar(a))==1)
   cout<< "\n O valor de A e par. ";
  else
   cout<< "\n O valor de A e impar. \n";
   
   if((imparpare(b))==1)
   cout<< "\n O valor de B e par. \n";
   else
   cout<< "\n O valor de B e impar. \n";
  
  	
	
	
	
	
getch();	
}
