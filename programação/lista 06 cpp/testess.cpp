
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
int i=0, n, c, q, m=0, z;


cout<< "armazenamento: ";
cin>> c;



int ve[c];

q=c;

while(q > m * m)
{
	m++;
	
}

int ma[m][m];	


while(i<c)
{
	cout<<" Forneca o [" <<i<< "] numero natural: ";
	cin>>ve[i];
	if(ve[i]>0)
	i++;
}
	

z=0;

	
for(i=0; i<m; i++)
for(n=0; n<m; n++)
{
ma[i][n] = ve[z];
z++;

if(z==c)
z=0;

cout<< "M ["<<i<<"]["<<n<<"] = " <<ma[i][n]<< "\n";

}	

}

