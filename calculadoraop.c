#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void limpaFluxo(){
    int ch;
    do{
        ch = fgetc(stdin);
    }
    while (ch != EOF && ch != '\n');
}

void adicao(){
    printf("Voce selecionou a Adicao:\n");
    limpaFluxo();
    Sleep(1000);
    system("cls");

    float resultado = 0.0, entrada;

    system("cls");
    printf("Digite um numero para comecar a somar ou uma letra para sair: \n");

    while(scanf("%f", &entrada) == 1){
        printf("Voce digitou: %f \n", entrada);
        resultado = resultado + entrada;
        limpaFluxo();
        system("cls");
        printf("O total somado ate agora eh de: %f \n", resultado);
        printf("Digite um novo numero a ser somado ou uma letra para interromper a operacao! \n");
    }

    system("cls");
    printf("Soma encerrada com um total de: %f", resultado);
    limpaFluxo();
    Sleep(5000);
    system("cls");
}

void subtracao(){
    printf("Voce selecionou a Subtracao:\n");
    limpaFluxo();
    Sleep(1000);
    system("cls");

    float resultado, entrada;

    system("cls");
    printf("Digite um numero para comecar a subtrair ou uma letra para sair: \n");

    if(scanf("%f", &entrada) == 1){
            printf("Voce digitou: %f\n", entrada);
            resultado = entrada;
            printf("Digitou outro numero para subtrair com este informado ou uma letra para interromper a operacao:\n");

        }
        while(scanf("%f", &entrada) == 1){
            printf("Voce digitou: %f \n", entrada);
            system("cls");
            resultado = resultado - entrada;
            limpaFluxo();
            system("cls");
            printf("O total ate agora eh de: %f \n", resultado);
            printf("Digite um novo numero para subtrair com este informado ou uma letra para interromper a operacao! \n");
        }

    system("cls");
    printf("Subtracao encerrada com um total de: %f", resultado);
    limpaFluxo();
    Sleep(5000);
    system("cls");
}

void divisao(){
    printf("Voce selecionou a Divisao:\n");
    limpaFluxo();
    Sleep(1000);
    system("cls");

    float resultado, entrada;

    system("cls");
    printf("Digite um numero para comecar a dividir ou uma letra para sair: \n");

    if((scanf("%f", &entrada) == 1) && (entrada == 0)){
            printf("Numero invalido! Nao eh possivel dividir 0(zero) por 0(zero)!");
            limpaFluxo();
            Sleep(5000);
            system("cls");
            printf("O total dividido ate agora eh de: %f \n", resultado == 0);
    }else{
        printf("Voce digitou: %f\n", entrada);
        resultado = entrada;
        printf("Digitou outro numero para dividir com este informado ou uma letra para interromper a operacao:\n");
    }

        while((scanf("%f", &entrada) == 1) || (entrada == 0)){
                printf("Voce digitou: %f \n", entrada);
                system("cls");
                resultado = resultado / entrada;
                limpaFluxo();
                system("cls");
                printf("O total dividido ate agora eh de: %f \n", resultado);
                printf("Digite um novo numero para continuar a dividir com este informado ou uma letra para interromper a operacao! \n");
         }

    system("cls");
    printf("Divisao encerrada com um total de: %f", resultado);
    limpaFluxo();
    Sleep(5000);
    system("cls");
}

void multiplicacao(){
    printf("Voce selecionou a Multiplicacao:\n");
    limpaFluxo();
    Sleep(1000);
    system("cls");

    float resultado, entrada;

    system("cls");
    printf("Digite um numero para comecar a multiplicar ou uma letra para sair: \n");

    if(scanf("%f", &entrada) == 1){
            printf("Voce digitou: %f\n", entrada);
            resultado = entrada;
            printf("Digitou outro numero para multiplicar com este informado ou uma letra para interromper a operacao:\n");

        }
        while(scanf("%f", &entrada) == 1){
            printf("Voce digitou: %f \n", entrada);
            system("cls");
            resultado = resultado * entrada;
            limpaFluxo();
            system("cls");
            printf("O total ate agora eh de: %f \n", resultado);
            printf("Digite um novo numero para multiplicar com este informado ou uma letra para interromper a operacao! \n");
        }


    system("cls");
    printf("Multilpicacao encerrada com um total de: %f", resultado);
    limpaFluxo();
    Sleep(5000);
    system("cls");
}

// Menu
int main(){
    //Variaveis
    int controle = 0;
    char ch;
    printf("############### CALCULADORA OPERACIONAL ###############\n\n\n");

    while (controle == 0) {
        printf("Digite a opcao desejada: \n");
        printf("A para (A)dicao;\n");
        printf("S para (S)ubtracao;\n");
        printf("D para (D)ivisao;\n");
        printf("M para (M)ultiplicacao;\n");
        printf("R para sai(R)\n");

        scanf("%c", &ch);

        switch (ch) {
            case 'A':
                adicao();
                break;
            case 'S':
                subtracao();
                break;
            case 'D':
                divisao();
                break;
            case 'M':
                multiplicacao();
                break;
            case 'R':
                controle = 1;
                break;
            default:
                printf("Opcao invalida! Tente novamente.");
                Sleep(5000);
                limpaFluxo();
                system("cls");
        }
    }
    printf("Obrigado por usar minha calculadora!\n");
    return 0;
}
