#include <iostream>
#include <conio.h>

using namespace std;

enum TMes {janeiro=1, fevereiro, marco,
           abril, maio, junho, julho, agosto,
           setembro, outubro, novembro, dezembro};
           
struct TData
{
    int dia, ano;
    enum TMes mes;

};

string TMesParaTexto (enum TMes mes)
{
    switch(mes)
    {
        case janeiro: return ("Janeiro");
        break;
        case fevereiro: return ("Feveiro");
        break;
        case marco: return ("Marco");
         break;
        case abril: return ("Abril");
         break;
        case maio: return ("Maio");
         break;
        case junho: return ("Junho");
         break;
        case julho: return ("Julho");
         break;
        case agosto: return ("Agosto");
         break;
        case setembro: return ("Setembro");
         break;
        case outubro: return ("Outubro");
         break;
        case novembro: return ("Novembro");
         break;
        case dezembro: return ("Dezembro");
        break;
    }
}


int diasExistentesNoMes(struct TData data)
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
 case fevereiro: 
 if (data.ano % 4 == 0 && data.ano % 100 != 0 ||data.ano % 400 == 0) return 29;else return 28;
 default: return 0;
}
}

bool dataValida(struct TData data)
{
if (data.mes >= janeiro && data.mes <= dezembro)
 return (data.dia >= 1 && data.dia <= diasExistentesNoMes(data));
 else return false;
}

main()
{
	
 
 struct TData data;
    
    int i;
    
    for(int n=1; n>=1; n++)
    {
	
    
    cout<< "Forneca uma data valida... \n";
    cout<< "DIA:";
    cin>> data.dia;
    cout<< "MES:";
    cin>> i;
    data.mes = (enum TMes)i;
    cout<< "ANO:";
    cin>> data.ano;
    
    
    if( dataValida(data))
    {
    n=-1;
	}
    }
  
  

    int x, j=0;
    
    for(x=1; x<data.mes; x++)
    {
    data.mes = (enum TMes)x;
    j = j + diasExistentesNoMes(data);	

	}
    j = j + data.dia;
   
    	
	cout<< "\n\n No ano de "<<data.ano<<" ha "  << j<< " ate " <<data.dia<< "/" <<TMesParaTexto(data.mes)<< "/" <<data.ano;
	
	
	
	
	
	
	
	
getch();	
}
