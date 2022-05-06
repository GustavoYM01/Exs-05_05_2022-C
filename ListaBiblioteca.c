#include<stdio.h>
#include "lista.h"
#include "pilha.h"

main(){
    // EXERC�CIO 2
    no *L=criaNo();
    int num;
            /*Caso tenha mem�ria suficiente e tenha sido alocado espa�o.*/
        inicia(L); /*Inicializa a lista - L recebe NULL */
        printf("PROGRAMA PARA CRIAR UMA LISTA ENCADEADA\n\n");
        do{ /*La�o repetitivo para receber valores diferentes de Zero */
            printf("Informe um valor:");
            scanf("%d", &num);
            if(num !=0 && num % 2 == 0)
                insereInicio(L, num); /*A fun��o insere nisso far� a coloca��o do conte�do da vari�vel num no in�cio da lista */
        }while(num!=0);

        printf("\n\nOs valores existentes na lista encadeada sao:\n");
        exibe(L); /*Imprimindo na tela os valores existentes na lista */
        printf("***Lembre-se: Cada valor inserido foi adicionado no inicio da estrutura.\n\n");

        free(L); /*Libera a mem�ria usada para alocar a mem�ria*/

        return 0;
    }
