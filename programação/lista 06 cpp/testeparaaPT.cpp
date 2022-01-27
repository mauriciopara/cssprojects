#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int retornaaposicao(int x1)
{
int i=1;
int z=1;
int n;

if(x1<=0)
return 0;

if( x1 % 2 == 0)
    {
        for(n = 2; n != x1; n = n + 2)
        {
            i = i + z;
            z = i + z;
        }
       
       return z;
    }
    
else 
    {
        for(n= 1; n!= x1; n = n + 2)
        {
           i = i + z;
           z = i + z;
        }
       if(i>0)
        return i;
    }

}




main()
{
	
int k = 40;
int vetor[k];
int i;
float z;


cout<< "\n ITEM 2: \n\n\n";

for(i=0; i<=40; i++)
{
	z=retornaaposicao(i);
	vetor[i] =z;	
}

float t =0;
float y =0;
float r =0;

for(i=1; i<k; i++)
{
    t = vetor[i+1];
    y = vetor[i];
    r = t/y;
    cout<< "\n"<<vetor[i+1]<< "/"<< vetor[i] <<" = " <<r<< "\n"  ;
}





cout<<"\n";
system("pause");
}

