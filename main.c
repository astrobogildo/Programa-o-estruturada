#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define barra for(f=0;f<40;f++)printf("-");printf("\n");
struct pessoas
{
    char  nome[40];
    char  data[6];
    char  cpf[11];
    char  rg[7];
    char  endereco[40];
    char  telefone[20];
    char  email[40];
} pessoasProg[80];

int indice;
void limpaBufferTeclado();
void incluir();
void consultar();
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int f;
    char opcao,abarra[30];
    do
    {
        system("cls"                                    );
        barra                                            ;
        printf("Menu De opções :\n"                     );
        printf("  I - Incluir novo cliente\n"           );
        printf("  C - Excluir clientes\n"               );
        printf("  P - Consultar um cliente\n"           );
        printf("  F - Fim do Programa\n"                );
        printf("      Digite a opção desejada:\n\n"     );
        barra                                            ;
        opcao = toupper((char)getch()                   );
        printf("\n\n\a"                                 );
        switch(opcao)
        {
        case 'I':
            incluir();
            break;
        case 'P':
            consultar();
            break;
        case 'F':
            printf("\nFim do programa");
            break;
        default :
            printf("Opção Inválida!!\n");
        }
        printf("\nDigite <Enter> para continuar...");
        limpaBufferTeclado();
    }while( opcao != 'F' );
    return 512;
}



void incluir()
{
    if(indice < 80)
    {
        printf("Digite o nome da pessoa ------: "   );
        gets(pessoasProg[indice].nome                 );
        printf("Digite a Data de Nascimento ------: "   );
        gets(pessoasProg[indice].data             );
        printf("Digite CPF -----------: "   );
        gets(pessoasProg[indice].cpf          );
        printf("Digite RG --------------: "   );
        gets(pessoasProg[indice].rg           );
        printf("Informe o endereco -: "   );
        gets(pessoasProg[indice].endereco           );
        printf("Digite o telefone ------: "   );
        gets(pessoasProg[indice].telefone             );
        printf("Digite o Email ------: "   );
        gets(pessoasProg[indice].email           );
        indice++;
    }
    else
    {
        printf("Espaço reservado cheio.\n");
        printf("Não é possível cadastrar novas pessoas no momento.\n\n");
    }
}

void consultar()
{
    int i,flag = 0,opcao;
    char nomeProcurado[30];
    do{

    system("cls"                                    );
                                    
        printf("Menu De opções :\n"                     );
        printf("  1 - Pesquisar por Nome\n"           );
        printf("  2 - Pesquisar por CPF\n"               );
        printf("  F - Fim do Programa\n"                );
        printf("      Digite a opção desejada:\n\n"     );
        opcao = toupper((int)getch()                   );

    switch(opcao)
        {
        case 1: //nome
            printf("Digite o nome da pessoa: ");
    scanf("%s%*c", &nomeProcurado);
    for(i = 0; i<80;i++)
    {
        if(strcmp(nomeProcurado,pessoasProg[i].nome) == 0)
        {
            flag = 1;
            break;
        }
    }
    if( flag )
    {
        printf("\nPessoa encontrada :\n\n"                                                             );
        printf("Nome da pessoa ------------------------------------: %s\n"    , pessoasProg[i].nome      );
        printf("Data de nascimento ---------------------------: %s\n"    , pessoasProg[i].data  );
        printf("CPF ----------------------: %i\n"    , pessoasProg[i].cpf);
        printf("RG ----------------------: %i\n"    , pessoasProg[i].rg);
        printf("Endereço ----------------------: %i\n"    , pessoasProg[i].endereco);
        printf("Telefone ----------------------: %i\n"    , pessoasProg[i].telefone);
        printf("email ----------------------: %i\n"    , pessoasProg[i].email);
    }
    else
        printf("Pessoa não encontrada"                                                                  );
            break;
        case 2: //telefone
                printf("Digite o telefone da pessoa ");
    scanf("%s%*c", &nomeProcurado);
    for(i = 0; i<80;i++)
    {
        if(strcmp(nomeProcurado,pessoasProg[i].telefone) == 0)
        {
            flag = 1;
            break;
        }
    }
    if( flag )
    {
        printf("\nPessoa encontrada :\n\n"                                                             );
        printf("Nome da pessoa ------------------------------------: %s\n"    , pessoasProg[i].nome      );
        printf("Data de nascimento ---------------------------: %s\n"    , pessoasProg[i].data  );
        printf("CPF ----------------------: %i\n"    , pessoasProg[i].cpf);
        printf("RG ----------------------: %i\n"    , pessoasProg[i].rg);
        printf("Endereço ----------------------: %i\n"    , pessoasProg[i].endereco);
        printf("Telefone ----------------------: %i\n"    , pessoasProg[i].telefone);
        printf("email ----------------------: %i\n"    , pessoasProg[i].email);
    }
    else
        printf("Pessoa não encontrada"                                                                  );
            break;
        case 3:
            printf("\nFim do programa");
            break;
        default :
            printf("Opção Inválida!!\n");
        }
        printf("\nDigite <Enter> para continuar...");
        limpaBufferTeclado();
    }while( opcao != 3 );
    return 512;
}

void limpaBufferTeclado()
{
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}