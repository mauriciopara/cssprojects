#include<iostream>
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
	

float vetor[40];
float t =0;
float y =0;
float r =0;
int i, z;

cout<< "\n ITEM 2: \n\n\n";

for(i=0; i<=40; i++)
{
	z=i;
	vetor[i] = retornaaposicao(z);	
}



for(i=1; i<40; i++)
{
    t = vetor[i+1];
    y = vetor[i];
    r = t/y;
    cout<< "\n"<<t << "/"<< y <<" = " <<r<< "\n"  ;
    
    
}





getchar();
}

