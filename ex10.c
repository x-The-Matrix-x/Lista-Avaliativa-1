/*Quest�o 10: Fa�a um programa que leia 10 inteiros e imprima sua m�dia.*/

#include <stdio.h>

int main() {
    int i, numero, soma = 0;
    float media;
    
    // leitura dos 10 inteiros
    for (i = 1; i <= 10; i++) {
        printf("Ola! Por favor, digite o %do numero inteiro: ", i);
        scanf("%d", &numero);
        soma += numero;
    }
    
    // c�lculo da m�dia
    media = soma / 10.0;
    
    // impress�o da m�dia
    printf("A media dos 10 numeros eh: %.2f\n", media);
    
return 0;

}

