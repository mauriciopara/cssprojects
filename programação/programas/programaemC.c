/*
  Primeiro programa em C para 2019/1
  Data 15/06/2020
  Autor: Mauricio Pará Roza Muniz de Aguiar
*/

#include<stdio.h>  //para usar printf, scanf e getchar
#include<stdlib.h> //para usar malloc, free e gets

void consolidado (char*,char,int,float,float); //não vai emitir retorno, por isso void

main()
{
char* nome; //variável do tipo texto
char sexo; //variável do tipo do caractere
int idade; //variável do tipo do inteiro
float peso, altura; //variável do tipo real

nome=(char*)malloc(sizeof(char));

printf("NOME: ");
gets(nome); //leitura do texto
printf("SEXO?[M]asculino ou [F]eminino: ");
sexo = getchar(); //leitura de caractere
printf("IDADE: ");
scanf("%d", &idade); //leitura de número
printf("PESO (em quilos):");
scanf("%f", &peso); //leitura de número
printf("ALTURA (em metros):");
scanf("%f", &altura); //leitura de número

consolidado(nome, sexo, idade, peso, altura);

free(nome);
	
}

void consolidado (char*n, char s, int i, float p, float a)
{
	printf("%s, sexo %c, possui %d anos, pesa %.2f quilos e mede %fmetros.\n",n,s,i,p,a);
}
