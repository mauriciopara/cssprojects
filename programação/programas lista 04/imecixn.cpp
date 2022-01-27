#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float tipos(float a, float p)
{
	float imc;
	
	imc = (p)/(pow(a,2));
	
	if(imc>=40)
    return 4;
	if(imc>=35 && imc<40)
	return 3;
	if((imc>=30)&& (imc<35))
	return 2;	
	if((imc>=25) && (imc<30))
	return 1;
	if(imc<25)
    return 0;
}

main()
{
	float a1,b1, result;
	
	cout<<"Digite sua altura: ";
	cin>>a1;
	cout<<"Digite seu peso: ";
	cin>>b1;
	
	result=tipos(a1,b1);
	
	cout<< "Seu IMC corresponde a: " <<result;
	
	getch();
}
