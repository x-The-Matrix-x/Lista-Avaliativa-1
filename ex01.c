/*Quest�o 1: Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferen�a do
produto de A e B pelo produto de C e D segundo a f�rmula: DIFERENCA = (A * B - C * D).
Apresente o resultado da seguinte forma:
	
	DIFERENCA = (�valor de A� * �valor de B� - ��valor de C� * ��valor de D�)
    DIFERENCA = (�valor de DIFERENCA�)
*/

#include <stdio.h>

int main() {
    int a, b, c, d, diferenca;
    
    // leitura dos valores de A, B, C e D
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    printf("Digite o valor de D: ");
    scanf("%d", &d);
    
    // c�lculo da diferen�a
    diferenca = (a * b - c * d);
    
    // impress�o do resultado
    printf("DIFERENCA = (%d * %d - %d * %d)\n", a, b, c, d);
    printf("DIFERENCA = (%d)\n", diferenca);
    
    return 0;
}
