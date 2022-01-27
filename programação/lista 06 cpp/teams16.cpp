#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
int i, n=0, x, y, a ,b;
int M1[x][y];
int M2[a][b];

cout<< "Digite a posicao 1(linhas/colunas): \n";
cin>> x; //0
cin>> y; //0

cout<< "Digite a posicao2(linhas/colunas): \n";
cin>> a;//2
cin>> b;//1
n=y;

for(i=x; i<=a; i++)
{

n++;

M1[i][n];

}






if(M1[i][n] == M2[a][b])
cout<< "Pode";
else
cout<< "Não Pode";


cout<<"\n";
system("pause");	
}
