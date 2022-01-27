#include<iostream>
#include<conio.h>
using namespace std;

enum Ttipo{
	residencial=1, comercial, movel
};

struct Ttipotwo{
	int ddd,number;
	enum Ttipo dado;
};

string optiontotext(enum Ttipo dado)
{
	switch(dado)
	{
	
	case residencial: return "Residencial";
	case comercial: return "Comercial";
    case movel: return "Movel";
}
}

main()
{

int i;

struct Tpessoa{
	string contato;
	struct Ttipotwo tag;
} pessoa;
	
cout<< "Digite o seu nome Mestre: ";
getline(cin, pessoa.contato);

cout<< "\nInforme o seu Tipo de telefone de acordo com a lista: \n\n  1-Residencial  \n\n  2-Comercial  \n\n  3-Movel  \n";
cin>>i;

pessoa.tag.dado=(Ttipo)i;

cout<< "\nInforme o seu DDD: ";
cin>>pessoa.tag.ddd;

cout<< "\nInforme o seu Numero: ";
cin>>pessoa.tag.number;

cout<< "\n\nContato da Agenda: " <<pessoa.contato;
cout<< "\nTipo de telefone: ";
if(i>=1 && i<=3) 
{cout<< optiontotext(pessoa.tag.dado);}
else cout<<" Tipo invalido";
cout<< "\nNumero: (" <<pessoa.tag.ddd<< ") " <<pessoa.tag.number;
     

	


	
	
getch();	
}
