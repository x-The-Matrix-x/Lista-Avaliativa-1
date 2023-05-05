/*Quest�o 9: Elabore um algoritmo que permita ao usu�rio realizar a compra de frutas. Assim,
apresente a lista de frutas dispon�veis, abaixo, com seus respectivos valores. O algoritmo
deve permitir ao usu�rio retomar o menu frutas quantas vezes quiser, e solicitar a quantidade
de frutas. Ao final, apresente o valor total da compra.

1 => ABACAXI � 5,00 a unidade
2 => MA�A � 1,00 a unidade
3 => PERA � 4,00 a unidade
*/

#include <stdio.h>

int main() {
    int opcao, quantidade;
    float valor_total = 0.0;
    
    do {
        // apresenta��o do menu de frutas
        printf("MENU DE FRUTAS\n");
        printf("1 - ABACAXI (R$5,00/unidade)\n");
        printf("2 - MACA (R$1,00/unidade)\n");
        printf("3 - PERA (R$4,00/unidade)\n");
        printf("0 - FINALIZAR COMPRA\n");
        
        // leitura da op��o escolhida pelo usu�rio
        printf("Ola! Por favor, escolha uma fruta (ou 0 para finalizar a compra): ");
        scanf("%d", &opcao);
        
        // processamento da op��o escolhida
        switch (opcao) {
            case 1:
                printf("Quantos abacaxis voce deseja comprar? ");
                scanf("%d", &quantidade);
                valor_total += 5.0 * quantidade;
                break;
            case 2:
                printf("Quantas macas voce deseja comprar? ");
                scanf("%d", &quantidade);
                valor_total += 1.0 * quantidade;
                break;
            case 3:
                printf("Quantas peras voce deseja comprar? ");
                scanf("%d", &quantidade);
                valor_total += 4.0 * quantidade;
                break;
            case 0:
                printf("Compra finalizada. Valor total: R$%.2f\n", valor_total);
                break;
            default:
                printf("Op��o invalida.\n");
        }
    } while (opcao != 0);
    
    return 0;
}

