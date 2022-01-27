//esta é a versão mais simples
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

int digitoDeUmInteiro(int n, int pos)
{
 int i, digito, tam;
 tam = quantidadeDeDigitosDeUmInteiro(n); //Determina o tamanho do número.
//As posições dos dígitos do número começam em zero e vão até a quantidade de
//dígitos presentes nesse número, subtraída de uma unidade. E zero equivale à
//posição das unidades.
 if (pos >= tam) return -1; //Assim, a tentativa de descobrir um digito na posição
 //igual ao tamanho do número para a função retornar um
//erro. O valor -1 indica esse erro.
 else
 {
 for (i = 0; i <= pos; i++)
 {
 digito = n % 10;
//Ao calcularmos o resto da divisão de um número por 10, estamos obtento o seu
//dígito menos significativo.
 n = n / 10;
//Ao dividir o número por 10, passamos a trabalhar com um número menor, sem aquele
//dígito menos significativo que foi obtido no passo anterior.
 }
 return digito;
 }
}


main()
{
	int x1, y1, r1, r2, n;
	cout<< "Este programa imprime uma lista de numeros espelhados compreendidos em um intervalo estabelecido pelo o usario... \n \n";
	cout<< "Indique o limite INICIAL dos números que serão testados:  ";
	cin>> y1;
	cout<< "\n Indique o limite FINAL dos números que serão testados:  ";
	cin>> x1;
	


getch();	
}
