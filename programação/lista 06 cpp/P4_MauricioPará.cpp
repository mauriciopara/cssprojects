//Maurício Pará Roza Muniz de Aguiar  10/03/2021
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
int i=0, n, c, casas, m=0, z;


cout<< "Forneca a quantidade de numeros a serem armazenados: ";
cin>> c;

if(c>0)
{

int vetor[c];

casas=c;



while(casas > m * m)
{
	m++;
	
}

int matriz[m][m];	


while(i<c)
{
	cout<<" Forneca o [" <<i<< "] numero natural: ";
	cin>>vetor[i];
	if(vetor[i]>0)
	i++;
}
	

z=0;

	
for(i=0; i<m; i++)
for(n=0; n<m; n++)
{
matriz[i][n] = vetor[z];
z++;

if(z==c)
z=0;

cout<< "M ["<<i<<"]["<<n<<"] = " <<matriz[i][n]<< "\n";

}	


}
else
cout<< "\nO valor fornecido nao corresponde a um natural positivo";

	
	
cout<<"\n";
system("pause");	
}
