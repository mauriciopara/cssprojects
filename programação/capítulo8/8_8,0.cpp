#include<iostream>
#include<conio.h>
using namespace std;

struct Tponto{
	float x, y;
}tipo;

struct Tponto pontomedio( struct Tponto p1, struct Tponto p2)
{
struct Tponto resposta;
resposta.x = (p1.x + p2.x)/2;
resposta.y = (p1.y + p2.y)/2;
return resposta;
}

main()
{
	
	
	struct Tponto p1, p2, pm;
	cout<< "Digite um valor para Xi: \n";
	cin>> p1.x;
	cout<< "Digite um valor para Yi: \n";
	cin>> p1.y;
 	cout<< "Digite um valor para Xf: \n";
	cin>> p2.x;
	cout<< "Digite um valor para Yf: \n";
	cin>> p2.y;

 

 

 

  pm = pontomedio(p1, p2);

 

  cout << "O ponto medio vale ( " << pm.x << " , " << pm.y << " )\n ";
	
getch();	
}
