#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	int*p;//ponteiro
	int i;
	i=5;
	p=(int*)malloc(sizeof(int));//evitar erros de endereços
	*p=i;
	printf("i=%d\n",i);
	printf("&i=%d\n",&i);
	printf("p=%d\n",p);
	printf("&p=%d\n",&p);
	printf("p=%d\n",*p);
	
}
