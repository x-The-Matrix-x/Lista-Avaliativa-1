/*Questão 8: Elabore um programa que faça a leitura de vários números inteiros até que se digite
um número negativo. O programa tem de retornar o maior e o menor número lido*/

#include <stdio.h>

int main() {
    int numero, maior, menor;
    
    // leitura do primeiro número
    printf("Ola! Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    // inicialização das variáveis maior e menor
    maior = numero;
    menor = numero;
    
    // leitura dos demais números e atualização do maior e do menor
    while (numero >= 0) {
        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
        printf("Digite outro numero inteiro: ");
        scanf("%d", &numero);
    }
    
    // impressão do resultado
    printf("O maior numero lido foi: %d\n", maior);
    printf("O menor numero lido foi: %d\n", menor);
    
return 0;

}

