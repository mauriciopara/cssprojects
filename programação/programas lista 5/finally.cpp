#include<iostream>
using namespace std;

main()
{
int x, i, z;

cout<< "     N-esimo termo da sequencia \n\n";
cout<< "Posicao desejada:  ";
cin>>x;

i=0;
z=1;

int n;
n = 2;

cout<< "\n corresponde a " <<z;

if(n % 2 == 0)
    {
        for(n = 2; n != x; n = n + 2)
        {
            i = i + z;
            z = i + i;
        }
        cout<< "\n corresponde a " <<z;
    }
    else
    {
        for(n= 1; n!= x; n = n + 2)
        {
           i = i + z;
           z = i + z;
        }
       cout<< "\n corresponde a " <<i;
    }



getchar();
}


