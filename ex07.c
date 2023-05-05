/*Escreva um programa que leia um n�mero inteiro, maior ou igual a zero, do usu�rio.
Imprima o en�simo termo da sequ�ncia de Fibonacci. Essa sequ�ncia come�a no termo de
ordem zero, e, a partir do segundo termo, seu valor � dado pela soma dos dois termos
anteriores. Alguns termos dessa sequ�ncia s�o: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/

#include <stdio.h>

int main() {
    int n, i, primeiro = 0, segundo = 1, proximo;
    
    // leitura do n�mero inteiro n
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);
    
    // c�lculo do en�simo termo da sequ�ncia de Fibonacci
    if (n == 0) {
        proximo = primeiro;
    } else if (n == 1) {
        proximo = segundo;
    } else {
        for (i = 2; i <= n; i++) {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
    }
    
    // impress�o do resultado
    printf("O enesimo termo da sequencia de Fibonacci eh: %d\n", proximo);
    
return 0;

}
