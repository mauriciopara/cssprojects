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
int n;	
	cout<< "Digite 1 numero: ";
	cin>> n;
	int pos;	
	cout<< "Digite 1 posi�ao: ";
	cin>> n;
 int i, digito, tam;
 tam = quantidadeDeDigitosDeUmInteiro(n); //Determina o tamanho do n�mero.


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
 cout<< digito;
 
 }
 getch();
}

