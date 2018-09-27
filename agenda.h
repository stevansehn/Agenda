/****************************************
*
*				Agenda Header
*
*****************************************/

typedef struct Contatos
{
	char nome[20];
	char telefone[13];
	char email[20];	
} Contato;

int adicionar(Contato c);

int campo_cidade(string s);

int remover(Contato c);

int buscar(char* s);

int total();
