/*Questão 2: Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no
plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais
após a vírgula, segundo a fórmula:
*/

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    // leitura dos pontos
    printf("Ola! Digite as coordenadas do ponto P1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do ponto P2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // cálculo da distância
    distancia = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    // exibição do resultado
    printf("A distancia entre os pontos P1(%.2f, %.2f) e P2(%.2f, %.2f) eh: %.4f\n", x1, y1, x2, y2, distancia);

    return 0;
}

