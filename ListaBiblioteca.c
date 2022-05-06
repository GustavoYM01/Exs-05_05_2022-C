#include<stdio.h>
#include "lista.h"
#include "pilha.h"

main(){
    // EXERCÍCIO 2
    no *L=criaNo();
    int num;
            /*Caso tenha memória suficiente e tenha sido alocado espaço.*/
        inicia(L); /*Inicializa a lista - L recebe NULL */
        printf("PROGRAMA PARA CRIAR UMA LISTA ENCADEADA\n\n");
        do{ /*Laço repetitivo para receber valores diferentes de Zero */
            printf("Informe um valor:");
            scanf("%d", &num);
            if(num !=0 && num % 2 == 0)
                insereInicio(L, num); /*A função insere nisso fará a colocação do conteúdo da variável num no início da lista */
        }while(num!=0);

        printf("\n\nOs valores existentes na lista encadeada sao:\n");
        exibe(L); /*Imprimindo na tela os valores existentes na lista */
        printf("***Lembre-se: Cada valor inserido foi adicionado no inicio da estrutura.\n\n");

        free(L); /*Libera a memória usada para alocar a memória*/

        return 0;
    }
