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

int bitmenor(int n)
{
int i, bitM;
 for (i = 0; i = 1; i++)
 {
 bitM = n % 10;
//Ao calcularmos o resto da divisão de um número por 10, estamos obtento o seu
//dígito menos significativo.

 }
 return bitM;	
}

int bitmaior(int n)
{
int i, bitn, z;
 if((quantidadeDeDigitosDeUmInteiro(n)) == 2)
 z=10;
 if((quantidadeDeDigitosDeUmInteiro(n)) == 3)
 z=100;


 for (i = 0; i = 1; i++)
 {
 
 bitn = n / z;
//Ao dividir o número por 10, passamos a trabalhar com um número menor, sem aquele
//dígito menos significativo que foi obtido no passo anterior.
 }
 return bitn;	
}





int tamanho(int x, int y)
{
int r1, r2, n;

for(n = 0 ; n<x; n = y + 1)
{
   
  
r1 = bitmenor(y);
r2 = bitmaior(y);

 	if(r1 == r2)
 	cout<< "valor " <<y;

}


}
main()

{
	int x1, y1, valores;
	cout<< "Este programa imprime uma lista de numeros espelhados compreendidos em um intervalo estabelecido pelo o usario... \n \n";
	cout<< "Indique o limite INICIAL dos números que serão testados:  ";
	cin>> x1;
	cout<< "\n Indique o limite FINAL dos números que serão testados:  ";
	cin>> y1;
	
    valores = tamanho(x1,y1);
	
	getch();
}


