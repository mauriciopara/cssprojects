#include <iostream>
#include <conio.h>
using namespace std;



struct TData
{
    int dia, ano;
    enum TMes  {Janeiro=1, Fevereiro, Marco,
           Abril, Maio, Junho, Julho, Agosto,
           Setembro, Outubro, Novembro, Dezembro} ;
};

string TMesParaTexto (enum TMes mes)
{
    switch(mes)
    {
        case Janeiro: return ("Janeiro");
        break;
        case Fevereiro: return ("Feveiro");
        break;
        case Marco: return ("Marco");
         break;
        case Abril: return ("Abril");
         break;
        case Maio: return ("Maio");
         break;
        case Junho: return ("Junho");
         break;
        case Julho: return ("Julho");
         break;
        case Agosto: return ("Agosto");
         break;
        case Setembro: return ("Setembro");
         break;
        case Outubro: return ("Outubro");
         break;
        case Novembro: return ("Novembro");
         break;
        case Dezembro: return ("Dezembro");
        break;
    }
}

/*int diasExistentesNoMes(struct TData data)
{
 switch (data.mes)
 {
 case janeiro:
 case marco:
 case maio:
 case julho:
 case agosto:
 case outubro:
 case dezembro: return 31;
 case abril:
 case junho:
 case setembro:
 case novembro: return 30;
 case fevereiro: if (data.ano % 4 == 0 && data.ano % 100 != 0 ||
 data.ano % 400 == 0) return 29;
 else return 28;
 default: return 0;
}
}**/

bool dataValida(struct TData data)
{
if (data.mes >= janeiro && data.mes <= dezembro)
 return (data.dia >= 1 && data.dia <= diasExistentesNoMes(data));
 else return false;
}


main()
{
	  
    struct TData valores;
    
    int i, n=0;
    
    while(n!=1)
    {

    cout<< "Forneca uma data valida... \n";
    cout<< "DIA:";
    cin>> valores.dia;
    cout<< "MES:";
    cin>> valores.mes;
    
    cout<< "ANO:";
    cin>> i;
    
    if(dataValida(valores))
    n++;
}
    
    valores.mes= (enum Tmes)i;
    
    




	
getch();	
}

