#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;



main()
{
  int first, second;
	
	cout<< "Digite um valor para X1: \n";
	cin>> first;
	
	cout<< "Digite um valor para X2: \n";
	cin>> second;
	
	if ( first % second == 0)
	{
	 cout<< "X1  divisvel por x2 \n";
	}
	else
	cout<< "X1  nao e divisvel por x2 \n";
	
	if (first % 2 == 0)
	 cout<< "X1  par \n";
	 else 
	 {
	 	cout<< "X1  impar \n";
	 }
	 
	
	
	
	if (second % 2 == 0)
	 cout<< "X1  par \n";
	 else 
	 {
	 	cout<< " X2  impar \n";
	 }
	 
	 getch();
}
