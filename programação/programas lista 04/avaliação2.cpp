//Mauricio Pará Roza Muniz de Aguiar    Data:09/12/2020  Avaliação 2
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
	
	if((letra(caracter))&&(vogal(caracter))&&(maiuscula(caracter)))
	cout<< "O caractere fornecido e vogal maiuscula";
	else
	if ((letra(caracter))&&(vogal(caracter)))else(maiuscula(caracter)))
	cout<< "O caractere fornecido e vogal minuscula.";

	
	
getch();	
	
}
