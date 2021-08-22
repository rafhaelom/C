#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <unistd.h> //para linux

#define MAX 100

int busca_linear(int v[], int elemento);

int main()
{
    //Defini do vetor e o preenche aleatóriamente de 0 a 100.
    int v[MAX];

    srand(time(NULL));  //inicia a funcao e semente dos numeros randomicos.

    for (int i = 0; i < MAX; i++){
        v[MAX] = (rand()%100);
        printf("\nValor no vetor: %d", v[i]);
    }

    printf("%d \n", busca_linear(v, 32));
    return 0;
}

int busca_linear(int v[], int elemento)
{
    for (int i =0; i < MAX; i++){
        printf("\nValor pesquisado: %d\n", i);
        if (v[i] == elemento){
            printf("Elemento encontrado!\n");
            return i;
        }
        else{
            printf("Elemento não encontrado!\n");
        }
    }
    return -1;
}