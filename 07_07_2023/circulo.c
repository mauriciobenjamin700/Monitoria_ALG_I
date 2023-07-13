#include <stdio.h>
#include <math.h>

void desenharCirculo(int raio) {
    int i, j;
    int diametro = 2 * raio;
    float distancia;

    for (i = -raio; i <= raio; i++) {
        for (j = -diametro; j <= diametro; j++) {
            distancia = (i * i + j * j) * (i * i + j * j);
            if (distancia <= raio) {
                printf("0");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int raio;

    printf("Digite o raio do círculo: ");
    scanf("%d", &raio);

    printf("Círculo:\n");
    desenharCirculo(raio);

    return 0;
}
