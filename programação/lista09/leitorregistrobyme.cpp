//tentar fazer um leitor mais id de contole p/ vetor

#include<iostream>
#include<fstream>
using namespace std;

struct Taluno{
string	nome;
float  nota1, nota2;
};

main()
{
struct Taluno pessoa;
string pulo;
ifstream entrada;
int i, x=0;

entrada.open("Registro.txt");
getline (entrada, pulo);   
while(!entrada.eof())
{
	getline (entrada, pessoa.nome);
    entrada >> pessoa.nota1;
    entrada >> pessoa.nota2;
     getline (entrada, pulo); ////////////////////////////
    x = x+1;
    
	
}
  
struct Taluno v[x];

entrada.clear();
entrada.seekg(0);

getline (entrada, pulo);
for(i=0; i<x; i++)
{
	getline (entrada, pessoa.nome);
    entrada >> pessoa.nota1;
    entrada >> pessoa.nota2;
    getline (entrada, pulo); ////////////////////////////
    v[i] = pessoa;
}

for(i=0; i<x; i++)
{
	cout<< "\n" <<v[i].nome;
	cout<< "\n" <<v[i].nota1;
	cout<< "\n" <<v[i].nota2;
}

entrada.close();
	
}
