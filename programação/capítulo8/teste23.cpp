//12/04/21
#include <iostream>
#include <conio.h>
using namespace std;

enum TMes {Janeiro=1, Fevereiro, Marco,
           Abril, Maio, Junho, Julho, Agosto,
           Setembro, Outubro, Novembro, Dezembro};
struct TData
{
    int dia, ano;
    enum TMes mes;
};

int AnoBissexto (int ano)
{
    if(ano%4==0&&ano%100!=0||ano%400==0)
        return(1);
    else return(0);
}

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

    int ValidaData (struct TData data)
    {
        switch (data.mes)
        {
            case Janeiro:
            case Marco:
            case Maio:
            case Julho:
            case Agosto:
            case Outubro:
            case Dezembro: if(data.dia<=31)
                              return(1);
                              else return(0);
                              break;

            case Abril:
            case Junho:
            case Setembro:
            case Novembro: if(data.dia<=30)
                              return(1);
                              else return(0);

            case Fevereiro: if (AnoBissexto(data.ano))
                  {
                if (data.dia<=29)
                    return(1);
                    else return(0);
                   }
            else {
                if (data.dia<=28)
                    return(1);
                    else return(0);
                 }
        }
    }
main ()
{
    struct TPessoa
    {
        string nome;
        struct TData dataDeNascimento;
    };
    struct TPessoa pessoa;

    int i;


    cout<<"Informe seu nome: ";
    getline (cin, pessoa.nome);
    cout<<pessoa.nome<<", informe dia, mes e ano de nascimento, separados por ENTER: ";
    cin>> pessoa.dataDeNascimento.dia;
    cin>> i;
    pessoa.dataDeNascimento.mes = (enum TMes)i;
    cin>> pessoa.dataDeNascimento.ano;

    if(ValidaData(pessoa.dataDeNascimento))
        cout<<"Voce nasceu em "<<pessoa.dataDeNascimento.dia<<" de "<<
        TMesParaTexto(pessoa.dataDeNascimento.mes)<<" de "<<pessoa.dataDeNascimento.ano;
    else cout<<"A data fornecida e invalida. O programa sera fechado.";
    getch();

}
