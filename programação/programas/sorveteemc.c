#include<stdio.h>
#include<conio.h>
float distancia (float v, float t, float a)
{
	float r;
	r = v*t + 0.5*a*t*t;
	return r;
}

main()
{
	float vi, ac, it, dp;
	printf("Forneca a velocidade inicial: ");
	scanf("%f", &vi);
	printf("Forneca a aceleracao: ");
	scanf("%f", &ac);
	printf("Forneca o intervalo de tempo: ");
	scanf("%f", &it);
	dp=distancia(vi, it, ac);
	printf("Distancia percorrida: %f", dp);
	getch();
	
	
}
