#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int anoBissexto ( int a)
{
	int resultado = 0;
	
	if (a % 4 ==0 && a % 100 !=0 || a % 400 == 0)
	   return 1;
	   
	return 0;   
	
}

int dias (int mes, int ano)
{
	
	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 )
	   return 31;
	   
	   else{
	   
	          
	   	   if(mes == 4 || mes == 6 || mes == 9 || mes == 10)
	   	   return 30;
	   	     else 
	   	        {
	   	        	if( mes == 2)
	   	        	   {
	   	        		if(anoBissexto(ano))
	   	        		   return 29; 
						  else return 28;
					   }
					   return 0;
				}
				    
	   
         }
	   

}

main()
{
	int mes1, ano1, total;
	cout<< "Digite um mes";
	cin>> mes1;
	cout<< "Digite o ano";
	cin>> ano1;
	total = dias (mes1, ano1);
	
	cout<< "Este mes possui " <<total<< " dias" ;
	
	getch();
	
	
}
