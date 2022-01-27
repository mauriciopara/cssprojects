#include<iostream>
#include <stdio.h>
using namespace std;
 

 main()
{

    int n;
  cout<< "Escolha a posicao: ";
  cin>> n;
    

 

    int c;
    int x = 0, z = 1;
    
    if(n % 2 == 0)
    {
        for(c = 2; c != n; c = c + 2)
        {
            x = x + z;
            z = x + z;
        }
        cout<< "Corresponde a:" <<z;
    }
    else
    {
        for(c = 1; c != n; c = c + 2)
        {
            x = x + z;
            z = x + z;
        }
        cout<< "Corresponde a: " << x;
    }
}
