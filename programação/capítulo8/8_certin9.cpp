#include<iostream>
#include<conio.h>
using namespace std;


        
struct TFracao{
	int num,den ;

};


struct TFracao somaFracao(struct TFracao x, struct TFracao y)
{
struct TFracao resposta;
resposta.num = x.num * y.den + x.den * y.num;
resposta.den = x.den * y.den;
return resposta;
};

struct TFracao subFracao(struct TFracao x, struct TFracao y)
{
struct TFracao resposta;
resposta.num = x.num * y.den - x.den * y.num;
resposta.den = x.den * y.den;
return resposta;
};

struct TFracao multFracao(struct TFracao x, struct TFracao y)
{
struct TFracao resposta;
resposta.num = x.num * y.num;
resposta.den = x.den * y.den;
return resposta;
};

struct TFracao divFracao(struct TFracao x, struct TFracao y)
{
struct TFracao resposta;
resposta.num = x.num * y.den ;
resposta.den = y.den * x.den;
return resposta;
};

main()
{
	
struct TFracao f1, f2, fr;

int i;
 

  cout << "Primeira fracao...\n";
  cout << "Numerador: ";
  cin  >> f1.num;
  cout << "Denominador: ";
  cin  >> f1.den;

 

  cout << "Segunda fracao...\n";
  cout << "Numerador: ";
  cin  >> f2.num;
  cout << "Denominador: ";
  cin  >> f2.den;
 
  cout << "Indique uma operação: \n1- Soma \n2-Subtracao \n3-Multiplicacao \n4-Divisao\n";
  cin>> i;
  if(i>=1 && i<=4)
  {
  if(i==1)
  {
  fr = somaFracao(f1, f2);
  cout << f1.num << "/" << f1.den << " + " << f2.num << "/" << f2.den << " = " << fr.num << "/" << fr.den << "\n";
  }
   if(i==2)
  {
  fr = subFracao(f1, f2);
  cout << f1.num << "/" << f1.den << " - " << f2.num << "/" << f2.den << " = " << fr.num << "/" << fr.den << "\n";
  }
   if(i==3)
  {
  fr = multFracao(f1, f2);
  cout << f1.num << "/" << f1.den << " * " << f2.num << "/" << f2.den << " = " << fr.num << "/" << fr.den << "\n";
  }
   if(i==4)
  {
  fr = divFracao(f1, f2);
  cout << f1.num << "/" << f1.den << " / " << f2.num << "/" << f2.den << " = " << fr.num << "/" << fr.den << "\n";
  }
  
}
else cout<< "\n Valor invalido...";
  
  getch();
}
