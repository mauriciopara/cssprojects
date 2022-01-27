#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float tipos(float a, float p, float &resulto)
{
	float imc;
	
	imc = (p)/(pow(a,2));
	
	if(imc>=40)
    resulto=4;
	if(imc>=35 && imc<40)
	resulto=3;
	if((imc>=30)&& (imc<35))
	resulto=2;	
	if((imc>=25) && (imc<30))
    resulto=1;
	if(imc<25)
    resulto=0;
    //de acordo com a revisão seria necessário retornar
}

main()
{
	float a1,b1, result;
	
	cout<<"Digite sua altura: ";
	cin>>a1;
	cout<<"Digite seu peso: ";
	cin>>b1;
	
	tipos(a1,b1,result);
	
	cout<< "Seu IMC corresponde a: " <<result;
	
	getch();
}
