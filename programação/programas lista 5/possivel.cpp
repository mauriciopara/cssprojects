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
main()
{
	int x, y, t, teste, n, bitmaior, bitmenor;
	cout<< "Este programa imprime uma lista de numeros espelhados compreendidos em um intervalo estabelecido pelo o usario... \n \n";
	cout<< "Indique o limite INICIAL dos números que serão testados:  ";
	cin>> x;
	cout<< "\n Indique o limite FINAL dos números que serão testados:  ";
	cin>> y;
	
while(t=1, t<x, t = y + 1)
{
  if(teste(n))
  
  bitmenor = y % n;
  	
  bitmior = y / n;
  
  if (bitmaior = bitmaior)
  cout<< y;
  
  y = y +1;	
}
	
	getch();
}
