#include<iostream>
using namespace std;


pagani(int x)
{
	int i,n;
	n=0;
	i=1;
	while(i <= x)
	{
	
    if (x % i == 0)
    n=n+1;
	
	i=i+1;
	
}
return n;
}
	


main()
{
	int a, f;
	
	cout<< "PRIMO OU NAO: \n \n";
	cout<< "Digite um valor: ";
	cin>> a;
	
   f = pagani(a);
   
   if( f == 2 )
   cout<< "\n Primo";
   else
   cout<< "\n Nao Primo";
   
getchar();	
}
