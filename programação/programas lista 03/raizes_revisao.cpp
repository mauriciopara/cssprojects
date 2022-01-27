#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float valores ( float a1, float b1, float c1, float &x1, float &x2)
{
	float delta;
	delta = (pow(b1,2) - 4 * a1 *c1);

	
	x1 = (-b1 - sqrt(delta))/(2*a1);
	
	x2 = ( -b1 + sqrt(delta)) /(2 * a1);
	
	
}

main()
{
	float a, b, c, y1, y2;
	
	cout<< "Digite um valor para a: \n";
	cin>> a;
    cout<< "Digite um valor para b: \n";
	cin>> b;
	cout<< "Digite um valor para c: \n";
	cin>> c;	
	
	valores(a, b, c, y1, y2);
	
	cout<< "\n X1 = " <<y1<< "\n X2 = " <<y2<< ".";
	
getch();
}
