//01 -Um comerciante comprou um produto e deseja revendê-lo com um lucro de 45% se o valor de compra for menor do que R$ 20,00; caso contrário, o lucro será de 30%. Entrar com o valor de compra do produto e exibir seu valor de venda

#include <stdio.h>

int main(void)
{
    float produto, lucro;

    printf("\nValor do produto: ");
    scanf("%f", &produto);

    if (produto<20)
    {
        lucro = 0.45;
    }
    else
    {
        lucro = 0.30;
    }

    printf("\nO produto deve ser vendido por %.2f R$", produto+produto*lucro);

    return 0;
}