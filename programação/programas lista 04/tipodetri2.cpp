#include<iostream>
#include<conio.h>
using namespace std;

string formares(float a1, float b1, float c1)
{
	if(((a1+b1)>c1)&& ((a1+c1)>b1) && ((c1+b1)>a1))
	 return	"sim";
	 else
	 return "nao";
	 
}

float tipose(float x1, float y1, float z1)
{
	if((x1 <= 0) || (y1 <= 0) || (z1 <= 0))
	return 0;
	
	if( x1 == y1 && y1==z1)
	return 3;
	
	if((x1 == y1 && x1!=z1)||(x1 == z1 && x1!=y1)||(y1 == z1 && y1!=x1))
	return 2;
	else
	return 1;
		
}

main()
{
float a, b, c, tipo;
string forma;

cout<< "Digite um valor para o lado A: ";
cin>>a;
cout<< "Digite um valor para o lado B: ";
cin>>b;	
cout<< "Digite um valor para o lado C: ";
cin>>c;	
forma=(formares(a,b,c));	
cout<< "Os valores podem formar um triangulo: " <<forma;

tipo=(tipose(a,b,c));

cout<<  ". \n O tipo deste triangulo corresponde a: " <<tipo;


	
	
getch();	
}
