#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

enum Testado{
	Acre=1, Alagoas, Amapa, Amazonas, Bahia, Ceara, DistritoFederal, EspiritoSanto, Goias, Maranhao, MatoGrosso, MatoGrossoDoSul, MinasGerais, Para, Paraiba, Parana, Pernambuco, Piaui, RiodeJaneiro, 
	RioGrandeDoNorte, RioGrandeDoSul, Rondonia, Roraima, SantaCatarina, SaoPaulo, Sergipe, Tocantins} dino;

struct Taddress
{
	int numero, complemento, cep;
	string bairro, cidade; 
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
    
    
    cout << dados.name<< ", Informe sua unidade federativa: \n";
    
    cin>> i;
    dados.end.estado = (enum Testado)i;
    
	





   // cout<< "Digite o numero da Rua: ";
    //cin>> end.rua;

   // cout << "\n Cidade: \n";
   // cin.ignore();
//getline(cin,end.cidade);
	
	  
	
//	cout << "\n Bairro: \n";
//	getline (cin, end.bairro);
	//
//	cout << "\n Complemento: \n";
//	cin  >> end.complemento;

//	cout << "CEP: \n";
    //cin >> end.cep;
    
    //cout<<"Contando com sua boa ação, aqui esta os resultados:)";
    
    //cout<< "Bairro: " << (cin, end.bairro);
   // cout << "\nCidade: ";
	
getch();	
	
}
