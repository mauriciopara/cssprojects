#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float tipos(float a, float p, int &resultado)
{
	float imc;
	imc = (p)/(pow(a,2));
	
	int retu;
	retu = resultado;
	
	if(imc>=40)
    retu=4;
	if(imc>=35 && imc<40)
	retu=3;
	if((imc>=30)&& (imc<35))
	retu=2;	
	if((imc>=25) && (imc<30))
	retu=1;
	if(imc<25)
    retu=0;
    
   
}

main()
{
	float a1,b1;
	int c1;
	
	cout<<"Digite sua altura: ";
	cin>>a1;
	cout<<"Digite seu peso: ";
	cin>>b1;
	
    tipos(a1,b1,c1);
	
	cout<< "Seu IMC corresponde a: " <<c1;
	
	getch();
}
