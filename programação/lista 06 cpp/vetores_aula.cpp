#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;

main()
{
	const int tam = 7; //sempre 7.
	int i, face, faces[tam];
	cout<<"Quantidade de arremessos do dado: ";
	cin>> faces[0];
	
for(i = 1; i < tam; i++)
faces[i]=0; // determina todos como zero///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	       
    srand(time(NULL)); // número aleatório em função da hora //////////////////////////////////////////////////////////////////////////////////////////////////////
    
	for	(i = 1; i <= faces[0]; i++)
	{
		face = rand() % 6 +1; //só pode ter como resto 0/1/2/3/4/5 + 1 (problema) resolvido //////////////////////////////////////////////////////////////////////
		faces[face]=faces[face] +1;
	}
	        
	 cout<<"\n Percentual de faces arremessadas: \n";
	for(i = 1; i < tam; i++) 
	cout << i << "="  <<100.0*faces[i]/faces[0] << "\n";  //como deseja um valor em %, realiza a operação no próprio cout/////////////////////////////////////////
	
	cout<<"\n";
	system("pause");	        
	        
}
