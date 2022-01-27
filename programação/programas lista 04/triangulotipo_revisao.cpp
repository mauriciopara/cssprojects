#include<iostream>
#include<math.h>
#include<conio.h>
#include<string>

using namespace std;

string formacao ( float l1, float l2, float l3)
{
	if((l1 < (l2 + l3)) && (l1 < (l2 + l3)) && (l1 < (l2 + l3)))
	{
	return "Estes valores podem constituir um triangulo. \n";
    }
    else
    {
      return "Estes valores nao podem constituir um triangulo. \n";
    }    
}

float triangulo( float a1, float b1, float c1)
{
   if (( a1 > 0) && ( b1 > 0) && ( c1 > 0))
   {
   if((a1 == b1) && (b1 == c1) && (a1 == c1))
   return 3;
   if((a1 != b1) && (b1 != c1) && (a1 != c1))
   return 1;
   if(((a1 == b1) && a1 != c1) || ((a1 == c1) && b1 != c1) || ((c1 == b1) && c1 != a1))
   return 2;
   }
   return 0;
}



main()
{
	float a, b, c, tipo;
	string form;
	
	cout<< "Digite um valor para o lado a: \n";
	cin>> a;
	cout<< "Digite um valor para o lado b: \n";
	cin>> b;
	cout<< "Digite um valor para o lado c: \n";
	cin>> c;
	
	form = formacao(a, b, c);
	
	tipo = triangulo(a, b, c);
	
	cout<< ". " <<form<< "\n" "Tipo de trinagulo: " <<tipo<< ".";
	
	
	
	
	getch();
	
}
