#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ifstream entrada;
	ofstream saida;
	string nome, pulo;
	float nota;
	
	entrada.open("Dados.txt");
	saida.open("Dadosduplos.txt");
	
	getline(entrada,pulo);
	
	while(!entrada.eof())
	{
	
	getline(entrada, nome);
	saida << "\n" << nome;
	
}

 entrada.close();
 saida.close();
	
}
