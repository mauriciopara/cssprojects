#include<iostream>
#include<conio.h>
using namespace std;

int vogal (char a1)
{
	
	return (a1 == 'a' || a1 == 'A' || a1 == 'e'|| a1 == 'E' || a1 == 'i' || a1 == 'I' ||  a1 == 'o' ||  a1 == 'O' || a1 == 'U' || a1 == 'U' );

}

main()
{
	bool c;
    char  a;

	cout<< "Digite um valor para a: \n";
	cin>> a;
	
	c = vogal(a);
    
	
	cout<< "O valor a corresponde a uma letra: " <<c<< ".";
	
	
	getch();
}
