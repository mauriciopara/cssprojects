#include <iostream>
#include <conio.h>

using namespace std;

enum TEstado {solteiro=1, casado, viuvo, separado, desquitado};
string TEstadoParaTexto(enum TEstado n)
{
	switch(n)
	{
		case solteiro    : return"Solteiro.";
		case casado      : return"Casado.";
		case viuvo       : return"Viuvo.";
		case separado    : return"Separado.";
		case desquitado  : return"Desquitado.";
	}
}

enum TSexo { masculino = 1, feminino};
string TSexoParaTexto(enum TSexo u)
{
	switch(u)
	{
		case masculino : return"Masculino";
		case feminino  : return"Feminino"; 
	}
}




main()
{
int i;
enum TEstado civil;

cout<< "Declare o seu Esatdo Civil...\n";
cout<< "1 - Solteiro \n";
cout<< "2 - Casado \n";
cout<< "3 - Viuvo \n";
cout<< "4 - Separado \n";
cout<< "5 - Desquitado \n";
cout<< "Sua escolha:  ";

cin>> i;



if(i>=1 && i<=5)
{
	civil = (enum TEstado)i;
	cout<< "Seu estado civil corresponde a " <<TEstadoParaTexto(civil);
}
else
cout<< "Estado civil invalido.";


int j;
enum TSexo s;

cout<< "\n\nDeclare o seu Sexo...\n";
cout<< "1 - Masculino \n";
cout<< "2 - Feminino \n";
cout<< "Sua escolha: ";

cin>> j;





if(j==1 || j==2)
{
	s = (enum TSexo)j;
	cout<< "\nSeu sexo corresponde a: " <<TSexoParaTexto(s);
}
else
cout<< "Invalido";




getch();	
}

