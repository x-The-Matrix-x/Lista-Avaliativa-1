/*Quest�o 8: Elabore um programa que fa�a a leitura de v�rios n�meros inteiros at� que se digite
um n�mero negativo. O programa tem de retornar o maior e o menor n�mero lido*/

#include <stdio.h>

int main() {
    int numero, maior, menor;
    
    // leitura do primeiro n�mero
    printf("Ola! Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    // inicializa��o das vari�veis maior e menor
    maior = numero;
    menor = numero;
    
    // leitura dos demais n�meros e atualiza��o do maior e do menor
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
    
    // impress�o do resultado
    printf("O maior numero lido foi: %d\n", maior);
    printf("O menor numero lido foi: %d\n", menor);
    
return 0;

}

