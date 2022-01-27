#include<iostream>
#include<conio.h>
using namespace std;


        
struct Tvalores{
	float n, d, h;

};


struct Tvalores function( struct Tvalores P1, struct Tvalores P2, struct Tvalores P3, struct Tvalores P4, int controle)
{
  struct Tvalores z;  //  nx = P3.d     dx =P1.d      ny = P4.n      dy = P2.n
 if(controle == 1)
{

 z.h= ( P3.d * P2.n + P4.n * P1.d) / (P1.d * P2.n);

}
if(controle == 2)
{

 z.h= ( P3.d * P2.n - P4.n * P1.d) / (P1.d * P2.n);
 
}

if(controle == 3)
{

 z.h= ((P3.d * P4.n) / (P1.d * P2.n));

}

if(controle == 4)   
{

 z.h= ((P3.d * P2.n) / (P2.n* P4.n ));

}

 return z;
}

main()
{
	
	int i;
	struct Tvalores p1, p2, p3, p4, pm;
	
	
	cout<< "Escolha uma opcao: \n 1- Soma \n 2- Subtracao\n 3-Multiplicacao \n 4-Divisao\n";
	cin>>i;
	
	if(i>=1 && i<=4)
	{
	
	cout<< "Digite um valor para Nx: \n";
	cin>> p3.d;
	cout<< "Digite um valor para Dx: \n";
	cin>> p1.d;
	cout<< "Digite um valor para Ny: \n";
	cin>> p4.n;
	cout<< "Digite um valor para Dy: \n";
	cin>> p2.n;
	pm = function(p1, p2,p3,p4, i);
	  cout << "\n Sua escolha equivale a " <<pm.h;
}
else
cout<< "Opcao invalida.";
 	
 
	
getch();	
}
