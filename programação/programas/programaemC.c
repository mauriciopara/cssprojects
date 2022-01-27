/*
  Primeiro programa em C para 2019/1
  Data 15/06/2020
  Autor: Mauricio Par� Roza Muniz de Aguiar
*/

#include<stdio.h>  //para usar printf, scanf e getchar
#include<stdlib.h> //para usar malloc, free e gets

void consolidado (char*,char,int,float,float); //n�o vai emitir retorno, por isso void

main()
{
char* nome; //vari�vel do tipo texto
char sexo; //vari�vel do tipo do caractere
int idade; //vari�vel do tipo do inteiro
float peso, altura; //vari�vel do tipo real

nome=(char*)malloc(sizeof(char));

printf("NOME: ");
gets(nome); //leitura do texto
printf("SEXO?[M]asculino ou [F]eminino: ");
sexo = getchar(); //leitura de caractere
printf("IDADE: ");
scanf("%d", &idade); //leitura de n�mero
printf("PESO (em quilos):");
scanf("%f", &peso); //leitura de n�mero
printf("ALTURA (em metros):");
scanf("%f", &altura); //leitura de n�mero

consolidado(nome, sexo, idade, peso, altura);

free(nome);
	
}

void consolidado (char*n, char s, int i, float p, float a)
{
	printf("%s, sexo %c, possui %d anos, pesa %.2f quilos e mede %fmetros.\n",n,s,i,p,a);
}
