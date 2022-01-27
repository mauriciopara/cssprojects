#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct TAluno
{
  string nome;
  float nota1, nota2;
};

void abrearquivodesaida(ofstream &f, string nome)
{
	f.open(nome());
}

main()
{
  struct TAluno aluno; //As vari�veis devem ser declaradas de forma local, isto �, dentro de uma fun��o.
  ofstream saida;
  int i, fim, qtd;


  abrearquivodesaida(saida,"semconfusao.txt");

  //Defini��o da quantidade de alunos e declara��o do vetor para armazenar essa quantidade de alunos.
  cout << "Quantos alunos? ";
  cin  >> qtd;
  struct TAluno v[qtd];

  for(i=0;i<qtd;i++)
  {
    system("cls");

    //Leitura de um registro de aluno, constitu�do de nome, nota1 e nota2...
    cout<<"Forneca o nome do "<<i+1<<".o aluno: ";
    scanf("\n");
    getline(cin, aluno.nome);
    cout<<"Forneca a primeira nota do "<<i+1<<".o aluno: ";
    cin >> aluno.nota1;
    cout<<"Forneca a segunda  nota do "<<i+1<<".o aluno: ";
    cin >> aluno.nota2;

    //Armazenamento de um registro de aluno no vetor...
    v[i] = aluno;
  }

  //Copiando do vetor para o arquivo...
  for(i=0;i<qtd;i++)
  {
    saida<<"\n"<<v[i].nome;
    saida<<"\n"<<v[i].nota1;
    saida<<"\n"<<v[i].nota2;
  }

  saida.close();
}
