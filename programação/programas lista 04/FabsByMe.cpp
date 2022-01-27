#include<iostream>
#include<conio.h>
using namespace std;

float troca (float a1, float&b1)
{
if(a1<0)
{
	b1 = a1 * -1;
}
else
    b1 = a1;


}

main()
{
	float a, b;
	
	cout<< "Digite um valor: \n";
	cin>> a;
	
	troca (a,b);
	
	cout<< "O modulo deste valor: \n" <<b<< ".";
	
	
	getch();
 	
	
}
