#include<iostream>
#include<conio.h>
using namespace std;

float ficacomigo (float a1, float a2, float a3, float a4, float &meubebe)
{
  meubebe = ( a1 * a3 + a2 * a4) / (a2 * a4);
}

float peruana (float a1, float a2, float a3, float a4, float &gringa)
{
  gringa = ( a1 * a3 - a2 * a4) / a2 * a4;
}

float xbox (float a1, float a2, float a3, float a4, float &seriex)
{
  seriex= ( a1 * a3) / (a2 * a4) ;
}

float ps (float a1, float a2, float a3, float a4, float &ps5)
{
  ps5= (a1 * a4) / (a2 * a3);
}

main()
{
	float nx, dx, ny, dy, eae, ferrou, primeiro, segundo;
	cout<< "Digite um valor para NX: ";
	cin>> nx;
	cout<< "Digite um valor para DX: ";
	cin>> dx;
	cout<< "Digite um valor para NY: ";
	cin>> ny;
	cout<< "Digite um valor para DY: ";
	cin>> dy;
	
	ficacomigo(nx, dx, ny, dy, eae);
	peruana(nx, dx, ny, dy, ferrou);
	xbox(nx, dx, ny, dy, primeiro);
	ps(nx, dx, ny, dy, segundo);
	
	cout<< "Adicao: " <<eae<< " \n Subtracao: " <<ferrou<< "\n Multiplicacao: " <<primeiro<< "\n Divisao: " <<segundo<< ".";
	
	getch();
	
	
}


