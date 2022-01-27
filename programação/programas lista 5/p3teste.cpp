#include<iostream>
#include<conio.h>
using namespace std;

int quantidadeDeDigitosDeUmInteiro(int n)
{
 int i, r = 0;
 if (n == 0) return 1; 
 else while (n != 0)
 { 
 n = n / 10; 
 r = r + 1; 
 }
 return r;
}

int bitmenor(int n) ///função
{
int i, bitm;
 for (i = 0; i = 1; i= i +1)
 {
 bitm = n % 10;


 }
 return bitm;	
}

int bitmaior(int x) ///função
{
int i, bitM, z;
 if((quantidadeDeDigitosDeUmInteiro(x)) == 2)
 z=10;
 if((quantidadeDeDigitosDeUmInteiro(x)) == 3)
 z=100;


 for (i = 0; i = 1; i= i + 1)
 {
 
 bitM = x / z;

 }
 return bitM;	
}





main()
{
	int x1, y1, r1, r2, n;
	cout<< "Este programa imprime uma lista de numeros espelhados compreendidos em um intervalo estabelecido pelo o usario... \n \n";
	cout<< "Indique o limite INICIAL dos números que serão testados:  ";
	cin>> y1;
	cout<< "\n Indique o limite FINAL dos números que serão testados:  ";
	cin>> x1;
	
	n=0;

while( n<=x1 )
{
	r1=bitmenor(y1);
	r2=bitmaior(y1);
	    if(r1 == r2)
	    cout<< "Valor" <<y1;
	    
	y1 = y1 + 1;
	n = n + y1;
}


getch();	
}

