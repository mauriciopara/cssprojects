#include<iostream>

using namespace std;


bool minuscula (char &a1)
{
	return(a1 >= 97 && a1 <= 122);
}

bool letracaps (char &a1)
{
	return(a1 >= 65 && a1 <= 90);
}

bool vogal (char &a1)
{

	return(a1 == 'a' || a1 == 'e'|| a1 == 'i'  || a1 == 'o' || a1 == 'u');
}

bool letra (char &a1)
{

return (a1 >= 97 && a1 <= 122) || (a1 >= 65 && a1 <= 90) ;

}

bool consoante (char &a1)
{

return (a1 == 'b' || a1 == 'c' || a1 == 'd' || a1 == 'f' || a1 == 'g' || a1 == 'h' || a1 == 'j' || a1 == 'k' || a1 == 'l' || a1 == 'm' || a1 == 'n' || a1 == 'p' || a1 == 'q' || a1 == 'r' ||  a1 == 's' || a1 == 't' || a1 == 'v' || a1 == 'w' || a1 == 'x' ||  a1 == 'y' || a1 == 'z');

}

bool algarismo (char &a1)
{
	return(a1 >= 48 && a1 <= 57);
	
}

main()
{
	char a;
	
    cout<< "Digite um valor:";
	cin>> a;
	

	
	if (letra(a))
	{
		cout<< " O valor digitado corresponde a uma letra. \n";
	}
	if (minuscula(a))
	{
		cout<< " O valor digitado corresponde a uma letra minúscula. \n";
	}
   if (letracaps(a))
	{
	    cout<< " O valor digitado corresponde a uma letra maiuscula. \n"; 	
	}  
	
	if (vogal(a))
	{
	  cout<< " O valor digitado corresponde a uma vogal. \n";	
	}
	 
	  
	 if (consoante(a))
	 {
	 	  cout<< " O valor digitado corresponde a uma consoante. \n";
	 }
    
    if (algarismo(a))
    
    { 
        cout<< " O valor digitado corresponde a um algarismo. \n";
	}
	
	return 0;
}
