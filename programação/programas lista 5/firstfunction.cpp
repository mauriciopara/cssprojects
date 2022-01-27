#include<iostream>
#include<conio.h>
using namespace std;

main()
{
int n;	
	cout<< "Digite 1 numero: ";
	cin>> n;
 int i, r = 0;
 
 if (n == 0) return 1; 
 
 
 else 

 {
 
 while (n != 0)
 { 
 n = n / 10; 
 r = r + 1; 
 }
 
 
 cout<< "Quantidade de digitos: " <<r;
}
 
 getch();
}
