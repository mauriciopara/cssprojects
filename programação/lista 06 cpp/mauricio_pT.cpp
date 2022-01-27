#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

float retornaaposicao(int x1)
{
float i=1;
float z=1;
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
float vetor[k];
int i;
float z;

cout<< "\n ITEM 2: \n\n\n";

for(i=0; i<=40; i++)
{
	z=retornaaposicao(i);
	vetor[i] = z;
	cout<<vetor[i]<<"\n";	
}



for(i=1; i<k; i++)
{
   
    cout<< "\n"<<vetor[i+1] << "/"<< vetor[i] <<" = " <<vetor[i+1]/vetor[i]<< "\n"  ;
    
    
}





cout<<"\n";
system("pause");
}

