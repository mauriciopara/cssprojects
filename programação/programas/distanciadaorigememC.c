#include<stdio.h>
#include<conio.h>
#include<math.h>


float distancia (float x, float y)
{
	float r;
	r = sqrt( pow(x, 2) + pow(y, 2));
	return r;
}

main()
{
	float x1, y1, z;
	printf("Forneca um valor para X: ");
	scanf("%f", &x1);
	printf("Forneca um valor para Y: ");
	scanf("%f", &y1);
	z=distancia(x1, y1);
	printf("Distancia da origem: %f", z);
	getch();
	
	
}
