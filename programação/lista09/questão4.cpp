#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ifstream entrada;
	ofstream medias;
	string nome, puloDeLinha;
	float nota;
	int i = 0;
	int j = 0;
	int x = 0;
	int k = 0;
	int c = 0;
	int v[x];
	
	entrada.open("Dados.txt"); 
	medias.open("Medias.txt");
	
	getline(entrada, puloDeLinha);
	
	while(!entrada.eof())
	{
		getline(entrada, nome);
		j= j+2;
		c++;
		x++;
		
		entrada >> nota;
		i = i + nota;
		v[x] = nota;
		x++;
		
		entrada >> nota;
		i = i + nota;
		v[x] = nota;
		
		getline(entrada, puloDeLinha);
	}
	
	
	//media turma
	int media;
	string me;
	me = "Media da turma:";
	medias<< "\n" <<me;
    media =  i/j;
    medias<< "\n" <<media;
	
	
	
	
	string my;
	my = "Media do aluno:";
	
	
	int p;
	int y=1;
	//media alunos
	for(int t=1; t<=c; t++)
	{
		medias<< "\nMedia do aluno "<<t<<":";
		k = k + 2;
		p = ((v[y] + v[k])/2);
		
		y = y +2;
		medias<< "\n" <<p;
	}
	
	entrada.close();
}
