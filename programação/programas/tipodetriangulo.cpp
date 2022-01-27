#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

string formaOuNao ( float a1, float b1, float c1)
{
 if (( a1 < b1 +c1) && (b1 < a1 + c1) && (c1 < b1 + a1))
	         return "Estes valores sao capazes de formar um triangulo";
	            else
	            {
	            	return "Estes valores nao sao capazes de formar um triangulo";
				}
}

float tipoDeTriangulo (float x1 , float y1, float z1, float &canideo)
{
              if( x1 == y1 && y1 == z1)
	            return 3;
	            if (x1 == y1 || y1 == z1 || z1 == x1)
	              return 2;
	              if (x1 != y1 && y1 != z1 && z1 != x1)
	               return 1;
	                else
	                {
	                	return 0;
					}
}

main()
{
	float a,b,c, x,y,z,cachorro;
	string gato;
	
	cout<< "Digite um valor para o lado A: \n";
	cin>> a;
	cout<< "Digite um valor para o lado B: \n";
	cin>> b;
	cout<< "Digite um valor para o lado C: \n";
	cin>> c;
	
	 gato = formaOuNao (a,b,c);
	
	cout<< ". " <<gato<< ". \n";
	"          Determina o tipo: \n";
	
	cout<< "Digite um valor para o lado X: \n";
	cin>> x;
	cout<< "Digite um valor para o lado Y: \n";
	cin>> y;
	cout<< "Digite um valor para o lado Z: \n";
	cin>> z;
	
cachorro = tipoDeTriangulo (x,y,x,cachorro);
	
	cout<< "Retorno ao tipo:   " <<cachorro<< ".";
	
	getch();
	
	
}
