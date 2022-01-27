#include<iostream>
#include<conio.h>
using namespace std;

typedef enum TTIPO  { residencial = 1, comercial, movel } TTipo;


typedef struct TTELEFONE
{
  TTipo tipo;
  int ddd;
  int numero;
} TTelefone;

typedef struct TCONTATO
{
  string nome;
  TTelefone telefone;
} TContato;

void ordena (TContato v[], int N)
{
  int i, pivot;
  TContato aux;

  for (pivot = 0; pivot < N-1; pivot++)
    for (i = pivot +1; i < N; i++)
      if (v[pivot].nome >= v[i].nome)
      {
        aux = v[pivot];
        v[pivot] = v[i];
        v[i] = aux;
      }
}
string tipoParaString (TTipo tipo)
{
  switch(tipo)
  {
    case comercial  : return "COMERCIAL";
    case residencial: return "RESIDENCIAL";
    case movel      : return "MOVEL";
  }
}
void imprime(TContato c)
{
  cout << c.nome 
       << " - " << tipoParaString(c.telefone.tipo) <<  "\n" 
       << "(" << c.telefone.ddd << ") " 
       << c.telefone.numero << "\n\n";
}



main()
{
  const int N = 100;   TContato agenda[N];   int i, n, t;   bool continua = true;
  n = 0;
  while (n < N)
  {
    cout << "Deseja inserir um novo contato? 1 - Sim | 0 - Nao: "; cin >> continua;
    if (continua)
    {
      cout << "Insira o " << n+1 << "o. contato...\n";
      cout << "Nome: ";   scanf("\n");   getline(cin, agenda[n].nome);
      
      cout << "Tipo de telefone? 1 - comercial | 2 - resindencial | 3 - movel : ";
      cin >> t;           agenda[n].telefone.tipo = (TTipo)t;
      
      cout << "DDD: ";    cin >> agenda[n].telefone.ddd;

      cout << "Numero: "; cin >> agenda[n].telefone.numero; cout << "\n";
      n++;
    }
    else break;
  }
  ordena(agenda, n);
  for (i = 0; i < n; i++)
    imprime(agenda[i]);
}

