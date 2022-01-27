#include<iostream>
#include<conio.h>
using namespace std;

enum Top{
	soma=1, subtracao, multiplicacao, divisao
};

struct Tvalue{
	float n, d;
	enum Top x;
} ;

 struct Tvalue valor( struct Tvalue P1, struct Tvalue P2)
 {
 enum Top x;
 struct Tvalue resposta;
 switch(x)
 {
 	case soma:        resposta=  ((P1.n / P2.n) + (P1.d / P2.d));
 	        
 	case subtracao:     ((P1.n / P2.n) - (P1.d / P2.d));
 		
 	case multiplicacao: ((P1.n / P2.n) * (P1.d / P2.d));
 		
 	case divisao:       ((P1.n / P2.n) / (P1.d / P2.d));
 }
 
 }
 
 main()
 {
 
	struct Tvalue p1, p2,  r;
	int i;
	
	cout<< "Escolha uma opcao: \n 1- Soma \n 2- Subtracao\n 3-Multiplicacao \n 4-Divisao\n";
	cin>>i;
	 
	dado.x = (enum Top)i;
	
	
	cout<< "\nDigite um valor para Dx: \n";
	cin>> p1.n;
	cout<< "Digite um valor para Dy: \n";
	cin>> p1.d;
 	cout<< "Digite um valor para Nx: \n";
	cin>> p2.n;
	cout<< "Digite um valor para Ny: \n";
	cin>> p2.d;

 

 

 

  r = valor(p1, p2);

 

  cout << "O ponto medio vale (" << r.d << ")\n ";
 	
 	
 	
 	
 	
getch();
 }
