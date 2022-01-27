#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float resultados (float p, float l, float c, float &vol, float &are)
{
	 vol = p * c * l;
	 
	 are = c * l; 
}

main()
{
	float profundidade, largura, comprimento, volume, area;
	
	cout<< "Digite um valor para a profundidade: \n";
	cin>> profundidade;
	cout<< "Digite um valor para a largura: \n";
	cin>> largura;
	cout<< "Digite um valor para a comprimento: \n";
	cin>> comprimento;
	
	resultados(profundidade, largura, comprimento, volume, area);
	
	cout<< "O volume da agua armazenada na piscina corresponde a:\n" <<volume<< ". \n" "A area do piso a ser substituida corresponde a: \n" <<area<< ".";
	
	getch();
}
