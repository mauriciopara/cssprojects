#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

main()
{
int i,l,c, x, y, a, b;


cout<< "Digite a posicao1: \n";
cin>> x;
cin>> y;

cout<< "Digite a posicao2: \n";
cin>> a;
cin>> b;

c=a+b;

if ( (x >= 0 && x <= 8) && (y >= 0 && y <= 8) && (a >= 0 && a <= 8) && (b >= 0 && b <= 8) )
 {
if((x-1)+(y+2)==c || (x-2)+(y+1)==c || (x-2)+(y-1)==c || (x-1)+(y-2)==c || (x+1)+(y-2)==c || (x+2)+(y-1)==c || (x+2)+(y+1)==c || (x+1)+(y+2)==c )
cout<<"Podem";
else
cout<<"Nao podem";
}
else
cout<<"Nao podem";



	
cout<< "\n";
system("pause");
}

