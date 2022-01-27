#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float conversao (float g)
{
float c;

const float pi = 3.141592;

c = ((pi*g)/180);

return c;


}

float areaDoTriangulo (float a1, float b1, float graus)
{
 float s, radianos;
 radianos = conversao (graus);
 s = (( a1 *b1 *sin(radianos))/2);
 return s;
}

main()
{
	float a, b, omega, area;
	
	cout<< "Digite um valor para o lado A: \n";
	cin>> a;
	cout<< "Digite um valor para o lado b: \n";
	cin>> b;
	cout<< "Digite um valor para o angulo formado entre os lados: \n";
	cin>> omega;
	
	area = areaDoTriangulo (a, b, omega);
	
	cout<< "Area" <<area<< ".";
	
	
	
	
	
	
	getch();
}
