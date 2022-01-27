#include <iostream>
using namespace std;
void himan(float &byeman)
{
	float aux;
	aux = (byeman*-2)/2;
	byeman= aux;

}

main()
{
	float x;
	cout << "Insert a number: ";
	cin >> x;
	himan(x);
	cout << "Fabs: " << x << ".";
	return 0;
}
