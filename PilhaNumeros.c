#include<stdio.h>
#include<ctype.h>
#include "pilha.h"
#include "lista.h"
#include "fila.h"

int main(void){

    // EXERCÍCIO 3
    int num=1;
    int qtdNumInt = 0;

    no *L=criaNo();
    inicia(L); // INICIALIZA A LISTA.

    printf("Informe a quantidade de numeros inteiros que serao armazenados: ");
    scanf("%d", &qtdNumInt);

    Pilha P = inicializaPilha(qtdNumInt); // INICIALIZA A PILHA P COM O TAMANHO qtdNumInt.

    do{
        printf("Informe o valor a ser inserido na pilha:\n");
        scanf("%d", &num);
        if(num!=0)
            empilha(num,P); // EMPILHA VALORES (num na pilha P) NA PILHA.
    } while(num!=0 && !pilhaCheia(P));

    printf("Valores removidos da pilha e inseridos na fila:\n");

    while(!pilhaVazia(P)) { // ESTRUTURA REPETITIVA QUE EXECUTA O ESCOPO ENQUANTO A PILHA NÃO ESTIVER VAZIA
        insereInicio(L, desempilha(P)); // INSERE VALORES NA LISTA E DESEMPILHA A PILHA P.
    }
    exibe(L); // EXIBE OS VALORES CONTIDOS NA LISTA

// ================================================**================================================

    // EXERCÍCIO 4
    int num = 1;
    int qtdNumInt = 0;

    no *L=criaNo();
    inicia(L);
    Fila F = inicializaFila(20);
    Pilha P = inicializaPilha(20);

    do{
        printf("Informe um valor:\n");
        scanf("%d", &num);
        if(num!=0) {
            if(num > 0 && num % 2 == 0) {
                empilha(num,P);
            }
            else if(num > 0 && num % 2 != 0) {
                enfileira(num,F);
            }
            else if(num < 0) {
                insereInicio(L, num);
            }
        }
    } while(num!=0 && !pilhaCheia(P) && !filaCheia(F));

    printf("Valores da fila e pilha:\n");

    while(!pilhaVazia(P) && !filaVazia(F)) {
        printf("%d - PILHA\n", desempilha(P));
        printf("%d - FILA\n", desenfileira(F));
    }
    printf("Valores da lista:\n");
    exibe(L);

    return 0;
}
