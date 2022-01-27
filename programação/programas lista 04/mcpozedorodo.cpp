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

float tipoDeTriangulo (float x1 , float y1, float z1)
{
            if ((x1 <0) || (z1 < 0) || (y1 < 0))
	                  return 0;
			  if( x1 == y1 && y1 == z1 && z1 == x1)
	            return 3;
	              if (x1 != y1 && y1 != z1 && z1 != x1)
	               return 1;
	                if((x1 == y1 && x1 != z1 && y1 != z1 ) || (y1 == z1 && y1 != x1 && z1 != x1 )||( z1 == x1 && z1 != y1 && x1 != y1))
	              return 2;
	                  
	                   
	               
}

main()
{
	float a,b,c, x,y,z,cachorro;
	string gato;
	
	cout<< "Digite um valor para o lado A: \n";
	cin>> a;
	cout<< "Digite um valor para o lado B: \n";
	cin>> b;
	cout<< "Digite um valo para o lado C: \n";
	cin>> c;
	
	 gato = formaOuNao (a,b,c);
	
	cout<< ". " <<gato<< ". \n";

	
	cout<< "Digite um valor para o lado X: \n";
	cin>> x;
	cout<< "Digite um valor para o lado Y: \n";
	cin>> y;
	cout<< "Digite um valor para o lado Z: \n";
	cin>> z;
	
cachorro = tipoDeTriangulo (x,y,z);
	
	cout<< "Retorno ao tipo:   " <<cachorro<< ".";
	
	getch();
	
	
}
