#include<stdio.h>// funcional. ARGUMENTOS REFERENCIA
#include<conio.h>

void troca(int *x, int *y)//precisamos de asteristicos. Os parâmetros x e y são ponteiros para os valores do tipo int
{
	int aux;
	aux=*x;
	*x=*y;
	*y=aux;
}

main()
{
	int a,b;
	printf("Escreva um numero para A---->");
	scanf("%d",&a);
	printf("Escreva um numero para B---->");
	scanf("%d",&b);
	troca(&a,&b);// NECESSARIO UM & COMERCIAL
	printf("Os valores finais para A e B sao %d e %d.",a,b);
	
	getch();
	
}
