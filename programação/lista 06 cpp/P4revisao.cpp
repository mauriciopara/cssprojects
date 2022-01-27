#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

main()
{
int i, n, c, z, m=0;

cout<< "Forneca a quantidade de numeros a serem armazenados: ";
cin>>c;

if(c>0)
{
int vetor[c];

while(c> m * m)
{
	m++;
}

int matriz[m][m];


/////////////////////////////////////////////////////////////


z=1;
i=0;
while(i<c)
{
	cout<< "Forneca o " <<z<<" numero natural: ";
	cin>>vetor[i];
	if(vetor[i]>=0)
	{
	z++;
	i++;
    }
}
////////////////////////////////////////////////////////////
z=0;
for(i=0;i<m;i++)
for(n=0;n<m;n++)
{
	matriz[i][n] = vetor[z];
	z++;
	if(z==c)
	{
		z=0;
	}

}
///////////////////////////////////////////////////////////

for(i=0;i<m;i++)
for(n=0;n<m;n++)
cout<< "["<<i<<"]["<<n<<"] = "<<matriz[i][n]<< "\n";


	
}
else
cout<<"\nO numero fornecido nao corresponde a um inteiro nao negativo. "	;



cout<<"\n";
system("pause");
}
