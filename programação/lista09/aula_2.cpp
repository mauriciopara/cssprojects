#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ifstream entrada;
	string nome, puloDeLinha;
	float nota;
	
	entrada.open("Dados.txt"); 
	
	getline(entrada, puloDeLinha);
	
	while(!entrada.eof())
	{
		getline(entrada, nome);
		cout << nome <<" ";
		
		entrada >> nota;
		cout << nota <<" ";
		
		entrada >> nota;
		cout << nota <<"\n";
		
		getline(entrada, puloDeLinha);
	}
	
	entrada.close();
}
