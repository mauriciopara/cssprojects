//esta � a vers�o mais simples
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
 tam = quantidadeDeDigitosDeUmInteiro(n); //Determina o tamanho do n�mero.
//As posi��es dos d�gitos do n�mero come�am em zero e v�o at� a quantidade de
//d�gitos presentes nesse n�mero, subtra�da de uma unidade. E zero equivale �
//posi��o das unidades.
 if (pos >= tam) return -1; //Assim, a tentativa de descobrir um digito na posi��o
 //igual ao tamanho do n�mero para a fun��o retornar um
//erro. O valor -1 indica esse erro.
 else
 {
 for (i = 0; i <= pos; i++)
 {
 digito = n % 10;
//Ao calcularmos o resto da divis�o de um n�mero por 10, estamos obtento o seu
//d�gito menos significativo.
 n = n / 10;
//Ao dividir o n�mero por 10, passamos a trabalhar com um n�mero menor, sem aquele
//d�gito menos significativo que foi obtido no passo anterior.
 }
 return digito;
 }
}


main()
{
	int x1, y1, r1, r2, n;
	cout<< "Este programa imprime uma lista de numeros espelhados compreendidos em um intervalo estabelecido pelo o usario... \n \n";
	cout<< "Indique o limite INICIAL dos n�meros que ser�o testados:  ";
	cin>> y1;
	cout<< "\n Indique o limite FINAL dos n�meros que ser�o testados:  ";
	cin>> x1;
	


getch();	
}
