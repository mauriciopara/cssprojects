#include<iostream>
#include<conio.h>

using namespace std;

enum Testado{
	Acre=1, Alagoas, Amapa, Amazonas, Bahia, Ceara, DistritoFederal, EspiritoSanto, Goias, Maranhao, MatoGrosso, MatoGrossoDoSul, MinasGerais, Para, Paraiba, Parana, Pernambuco, Piaui, RiodeJaneiro, 
	RioGrandeDoNorte, RioGrandeDoSul, Rondonia, Roraima, SantaCatarina, SaoPaulo, Sergipe, Tocantins} dino;

struct Taddress
{
	int numero,  cep;
	string bairro, cidade,complemento; 
	float rua;
	enum Testado estado;
} end;

string Testadototext(enum Testado estado){
	switch(estado)
	{
	    case Acre : return "Acre";
        case Alagoas : return "Alagoas";
        case Amapa : return "Amapa";
        case Amazonas : return "Amazonas";
        case Bahia : return "Bahia";
        case Ceara : return "Ceara";
        case DistritoFederal : return "Distrito Federal";
        case EspiritoSanto : return "Espirito Santo";
        case Goias : return "Goias";
        case Maranhao : return "Maranhao";
        case MatoGrosso : return "Mato Grosso";
        case MatoGrossoDoSul : return "Mato Grosso do Sul";
        case MinasGerais : return "Minas Gerais";
        case Para : return "Para";
        case Paraiba : return "Paraiba";
        case Parana : return "Parana";
        case Pernambuco : return "Pernambuco";
        case Piaui : return "Piaui";
        case RiodeJaneiro : return "Rio de Janeiro";
        case RioGrandeDoNorte : return "Rio Grande do Norte";
        case RioGrandeDoSul : return "Rio Grande do Sul";
        case Rondonia : return "Rondonia";
        case Roraima : return "Roraima";
        case SantaCatarina : return "Santa Catarina";
        case SaoPaulo : return "Sao Paulo";
        case Sergipe : return "Sergipe";
        case Tocantins : return "Tocantins";	
	}

}



main()
{
int i;
	
    struct Tdados{
    	string name;
    	struct Taddress end;
	} dados;
    
    
    cout<< "Informe o seu nome: ";
   
    getline (cin, dados.name);
    
    cout<< "\n            QUADRO DE ESTADOS\n\n 1-- Acre, 2--Alagoas, 3--Amapa, 4--Amazonas, 5--Bahia, 6--Ceara, 7--Distrito Federal, 8--Espirito Santo, 9--Goias, 10--Maranhao, 11--MatoGrosso, 12--MatoGrossoDoSul, 13--MinasGerais, 14--Para, 15--Paraiba, 16--Parana, 17--Pernambuco, 18--Piaui, 19--RiodeJaneiro, 20--RioGrandeDoNorte, 21--RioGrandeDoSul, 22--Rondonia, 23--Roraima, 24--SantaCatarina, 25--SaoPaulo, 26--Sergipe, 27--Tocantins";
    
    
    cout << "\n\n"<<dados.name<< ", Informe sua unidade federativa: \n";
    
    cin>> i;
    dados.end.estado = (enum Testado)i;
    
    
    cout<< "\n Digite o numero da Rua: ";
    cin>> end.rua;

    cout << "\n Informe sua Cidade: \n";
    cin.ignore();
    getline(cin,end.cidade);
    
	cout << "\n Informe seu Bairro: \n";
	getline (cin, end.bairro);
	
    cout << "\n Complemento(somente letras): \n";
	getline (cin, end.complemento);
	
	cout << "\n CEP: \n";
	
    cin >> end.cep;
    
    cout<< "\n" <<dados.name<< " seu estado correspondente equivale a: " <<Testadototext(dados.end.estado)<< "\nSua cidade: " <<end.cidade<< "\nSeu bairro: " <<end.bairro<< "\nO numero da sua RUA: " <<end.rua<< "\nSeu CEP: " <<end.cep;
    
 
	
getch();	
	
}
