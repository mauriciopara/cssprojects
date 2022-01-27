#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ofstream entrada2;
	string nome, pulo;
	float nota;
	
	entrada2.open("Dados.txt", ios::app);
	

	
	cout<< "Forneca a nome do aluno: ";
	getline(cin,nome);
	entrada2<< "\n" <<nome;
	cout<< "Forneca a primeira nota do aluno: ";
	cin >> nota;
	entrada2 << "\n" <<nota;	
	cout<< "Forneca a segunda nota do aluno: ";
    cin >> nota;
	entrada2 << "\n" <<nota; 
	
	
	entrada2.close();
	
	
	
	
}
