#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

main()
{
	string texto1, texto2;
	int comprimento1, comprimento2, comparacao;
	texto1 = "CEFET";
    texto2 = texto1;
	texto2 = texto2 + "/RJ";
	comprimento1 = texto1.length();
	comprimento2 = texto2.length();
	
	
	
	cout << "O primeiro texto e " << texto1 << ".\n";
	cout << "O segundo texto e "  << texto2 << ".\n";
	cout << "O comprimento do primeiro texto e " <<comprimento1 <<".\n";
	cout << "O comprimento do segundo texto e " <<comprimento2 <<".\n";	
	
	if(texto1 == texto2)
	   cout<< "Os dois textos sao identicos. \n";
	else if (texto1 > texto2)
	cout<< "O primeiro texto e maior na comparacao alfabetica. \n";
	   else
	   	cout<< "O primeiro texto e menor na comparacao alfabetica. \n";
	   	
getch();
}
