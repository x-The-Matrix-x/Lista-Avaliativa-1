/* Quest�o 5: Fa�a um algoritmo que leia um n�mero positivo e imprima seus divisores. Exemplo:
Os divisores do n�mero 66 s�o: 1, 2, 3, 6, 11, 22, 33 e 66*/

#include <stdio.h>

int main() {
    int num, i;
    
    printf("Digite um numero positivo: ");
    scanf("%d", &num);
    
    printf("Os divisores do numero %d sao: ", num);
    
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
return 0;

}

