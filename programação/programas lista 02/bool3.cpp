#include<iostream>
#include<conio.h>
#include<string>
using namespace std;


bool minuscula (char a1)
{
	return(a1 >= 97 && a1 <= 122);
}

bool letracaps (char a1)
{
	return(a1 >= 65 && a1 <= 90);
}

bool vogal (char a1)
{

	return(a1 == 'a' || a1 == 'e'|| a1 == 'i'  || a1 == 'o' || a1 == 'u' || a1 == 'A' || a1 == 'E'|| a1 == 'I'  || a1 == 'O' || a1 == 'U');
}

bool letra (char a1)
{

return (a1 >= 97 && a1 <= 122) || (a1 >= 65 && a1 <= 90) ;

}

bool consoante (char a1)
{

return (a1 == 'b' || a1 == 'c' || a1 == 'd' || a1 == 'f' || a1 == 'g' || a1 == 'h' || a1 == 'j' || a1 == 'k' || a1 == 'l' || a1 == 'm' || a1 == 'n' || a1 == 'p' || a1 == 'q' || a1 == 'r' ||  a1 == 's' || a1 == 't' || a1 == 'v' || a1 == 'w' || a1 == 'x' ||  a1 == 'y' || a1 == 'z' || a1 == 'B' || a1 == 'C' || a1 == 'D' || a1 == 'F' || a1 == 'G' || a1 == 'H' || a1 == 'J' || a1 == 'K' || a1 == 'L' || a1 == 'M' || a1 == 'N' || a1 == 'P' || a1 == 'Q' || a1 == 'R' ||  a1 == 'S' || a1 == 'T' || a1 == 'V' || a1 == 'W' || a1 == 'X' ||  a1 == 'Y' || a1 == 'Z');

}

bool algarismo (char a1)
{
	return(a1 >= 48 && a1 <= 57);
	
}

main()
{
	char a;
	bool b, c, d, e, f, g;
	cout<< "Digite um valor para a:\n";
	cin>> a;
	b = minuscula(a);
	c = letracaps(a);
	d = vogal (a);
	e = letra (a);
	f = consoante(a);
	g = algarismo(a);
	
		cout<< "O valor digitado corresponde a uma vogal: \n" <<d<< ".\n";
		cout<< "O valor digitado corresponde a um algorismo:\n " <<g<< ".\n";
		cout<< "O valor digitado corresponde a uma letra minuscula:\n " <<b<< ".\n";
		cout<< "O valor digitado corresponde uma letra maiuscula:\n " <<c<< ".\n";
		cout<< "O valor digitado corresponde a uma letra:\n " <<e<< ".\n";
		cout<< "O valor digitado corresponde uma consoante:\n " <<f<< ".\n";
		
	
	
getch();	
}

