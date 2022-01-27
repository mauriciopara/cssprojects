//Mauricio Pará Roza Muniz de Aguiar    Data:09/12/2020  Avaliação-2
#include<iostream>
#include<conio.h>
using namespace std;

bool digito(char carac)
{
 return (carac >= '0' && carac <= '9');
}

bool letra(char carac)
{
 return ((carac >= 'A' && carac <= 'Z') || (carac >= 'a' && carac <= 'z'));
}

bool digitoPar(char carac)
{
return((carac == '0')||(carac =='2')||(carac =='4')||(carac =='6')||(carac == '8'));
}

bool vogal(char carac)
{
return((carac == 'a')||(carac =='e')||(carac =='i')||(carac =='o')||(carac == 'u')||(carac == 'A')||(carac =='E')||(carac =='I')||(carac =='O')||(carac == 'U'));		
}

bool maiuscula(char carac)
{
return ((carac >= 'A' && carac <= 'Z'));	
}

main()
{
	char caracter;
	cout<< "Digite um unico caractere: ";
	cin>>caracter;
	
	if((letra(caracter))&&(vogal(caracter)))
	{

	if(maiuscula(caracter))	
	cout<< "O caractere fornecido e vogal maiuscula";
	else
	cout<< "O caractere fornecido e vogal minuscula";
	
	}

	

	
	if((letra(caracter))&&((vogal(caracter))==false))
	{
			if(maiuscula(caracter))
			cout<< "O caractere fornecido e consoante maiuscula.";
			else
			cout<< "O caractere fornecido e consoante minuscula.";
		
   }
	

	
	if(digito(caracter))
	{
		if(digitoPar(caracter))
		cout<< "O caractere fornecido e digito par.";
	    else
	    cout<<"O caractere fornecido e digito impar.";
	}

    if(((digito(caracter))==false)&&((letra(caracter))==false))
	cout<<"O caractere fornecido nao e nem letra, nem digito.";

	
	

	
	getch();
	
	
}
