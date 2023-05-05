/*Questão 10: Faça um programa que leia 10 inteiros e imprima sua média.*/

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
    
    // cálculo da média
    media = soma / 10.0;
    
    // impressão da média
    printf("A media dos 10 numeros eh: %.2f\n", media);
    
return 0;

}

