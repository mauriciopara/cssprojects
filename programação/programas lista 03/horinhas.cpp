#include<iostream>
#include<conio.h>
using namespace std;

int solucao(int valor, int &paitaload, int &horasbolas)
{


	horasbolas = (valor/60);
	paitaload =  (valor % 60);
     
     
		
	 
}

main()
{
	int alek, paitaon, horasquads;

	cout<< "Digite um valor em minutos: \n";
	cin>> alek;
	
	solucao(alek,paitaon,horasquads);
	
	cout<< "\nHoras: " <<horasquads<<  "\nMinutos: " <<paitaon<< ".";	
	
	
	getch();
	
	
	
	
}
