#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define MAX_CONTATOS 50
#define MAX_CARAC_NOME 100
#define MAX_CARAC_EMAIL 50
#define MAX_NUM_TELEF 9

char nome[MAX_CONTATOS] [MAX_CARAC_NOME] = {};
char email[MAX_CONTATOS] [MAX_CARAC_EMAIL] = {};
char telefone[MAX_CONTATOS] [MAX_NUM_TELEF] = {};
int contador = 0, quantidade = 0;


void limpaFluxo(){
    int ch;
    do{
        ch = fgetc(stdin);
    }
    while (ch != EOF && ch != '\n');
}

void adicionar(){

    printf("Quantos contatos deseja adicionar: \n");
    scanf("%d", &quantidade);
    Sleep(1000);
    limpaFluxo();
    system("cls");
    if(quantidade != 0 && quantidade <= 50){
        for (int i = 0; i < quantidade; i++){
            printf("Digite o nome do contato: \n");
            fgets(nome[i], MAX_CARAC_NOME, stdin);
            Sleep(500);
            system("cls");
            printf("Nome adicionado com sucesso! \n");
            Sleep(700);
            system("cls");

            printf("Digite o e-mail do contato: \n");
            fgets(email[i], MAX_CARAC_EMAIL, stdin);
            Sleep(500);
            system("cls");
            printf("E-mail adicionado com sucesso! \n");
            Sleep(700);
            system("cls");

            printf("Digite o telefone do contato: \n");
            fgets(telefone[i], MAX_NUM_TELEF, stdin);
            Sleep(500);
            system("cls");

            printf("\t%s \t %s \t %s \n\n", nome[i], email[i], telefone[i]);

            printf("Contato adicionado e salvo na agenda com sucesso! \n");
            Sleep(1000);
            system("cls");
        }
    }
    else{
        printf("Retornando ao MENU... \n");
        Sleep(500);
        }
    system("cls");
}
void mostrar(){

    for (int i = 0; i < MAX_CONTATOS; i++){
        printf("- Contato %d - \n%s %s %s \n", contador + i, nome[i], email[i], telefone[i]);
        Sleep(1500);
    }
}

void alterar(int contato){

    char novo_nome[MAX_CARAC_NOME], novo_email[MAX_CARAC_EMAIL], novo_telefone[MAX_NUM_TELEF];

    limpaFluxo();
    printf("Digite o nome do novo contato: \n");
    strcpy(nome[contato],fgets(novo_nome, MAX_CARAC_NOME, stdin));
    Sleep(1500);
    system("cls");
    printf("Nome adicionado com sucesso! \n");
    Sleep(1500);
    system("cls");

    printf("Digite o e-mail do novo contato: \n");
    strcpy(email[contato],fgets(novo_email, MAX_CARAC_EMAIL, stdin));
    Sleep(1500);
    system("cls");
    printf("E-mail adicionado com sucesso! \n");
    Sleep(1500);
    system("cls");

    printf("Digite o telefone do novo contato: \n");
    strcpy(telefone[contato],fgets(novo_telefone, MAX_NUM_TELEF, stdin));
    Sleep(1500);
    system("cls");

    printf("Alteracao de contato realizada !!! \n\n");
    printf("Novo contato adicionado e salvo na agenda com sucesso! \n");
    Sleep(1000);
    system("cls");
}

void removerUltimo(){
    memset(nome[MAX_CONTATOS - 1], 0, sizeof(nome[MAX_CARAC_NOME]));
    memset(email[MAX_CONTATOS - 1], 0, sizeof(email[MAX_CARAC_EMAIL]));
    memset(telefone[MAX_CONTATOS - 1], 0, sizeof(telefone[MAX_NUM_TELEF]));

    printf("Ultimo contato removido com sucesso! \n");
    Sleep(1500);
    system("cls");
}

void limparAgenda(){

    printf("Limpando Agenda......");
    Sleep(1500);

    for(int i = 0; i < MAX_CONTATOS;i++){
        memset(nome[i], 0, sizeof(nome[MAX_CARAC_NOME]));
        memset(email[i], 0, sizeof(email[MAX_CARAC_EMAIL]));
        memset(telefone[i], 0, sizeof(telefone[MAX_NUM_TELEF]));
    }
    system("cls");
    printf("Agenda Limpa!!!\n\n");
    printf("Todos os contatos foram apagados!!!\n\n");
    contador = 0;

    Sleep(1500);
    limpaFluxo();
    system("cls");
}

// Menu
int main() {
    int controle = 0;
    int contato;
    char ch;

    while (controle == 0){
        printf(">>>>>>>>>>>>>>> AGENDA TELEFONICA <<<<<<<<<<<<<<< \n\n\n");
        printf("Digite a opcao desejada: \n");
        printf("(1) Adicionar um novo numero; \n");
        printf("(2) Mostrar todos os numeros ja adicionados anteriormente; \n");
        printf("(3) Alterar um registro; \n");
        printf("(4) Remover o utlimo numero adicionado; \n");
        printf("(5) Limpar a agendar; \n");
        printf("(0) Sair! \n\n\n");

        scanf("%c", &ch);

        switch (ch){
            case '1':
                printf("Voce selecionou: (1) Adicionar um novo numero! \n");
                Sleep(1500);
                limpaFluxo();
                system("cls");
                adicionar();
                break;
            case '2':
                printf("Voce selecionou (2) Mostrar todos os numeros ja adicionados anteriormente; \n");
                limpaFluxo();
                Sleep(1500);
                system("cls");
                mostrar();
                break;
            case '3':
                printf("Voce selecionou (3) Alterar um registro; \n");
                Sleep(1500);
                limpaFluxo();
                system("cls");
                mostrar();
                printf("Qual contato deseja alterar: \n");
                scanf("%d", &contato);
                system("cls");
                alterar(contato);
                break;
            case '4':
                printf("Voce selecionou (4) Remover o utlimo numero adicionado; \n");
                Sleep(1500);
                limpaFluxo();
                system("cls");
                removerUltimo();
                break;
            case '5':
                printf("Voce selecionou (5) Limpar a agendar; \n");
                Sleep(1500);
                system("cls");
                limparAgenda();
                break;
            case '0':
                printf("Fechando Agenda!!!");
                Sleep(1500);
                system("cls");
                controle = 1;
                break;
            default:
                printf("Opcao invalida! Tente novamente. \n");
                Sleep(1500);
                limpaFluxo();
                system("cls");
        }
    }
    printf("Obrigado por usar minha agenda telefonica! \n");
    system("pause");
    return 0;
}
