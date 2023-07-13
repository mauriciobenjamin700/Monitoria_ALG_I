/*01 – Faça um programa para receber um valor de um cliente e escolher a forma de pagamento
Segundo os dados abaixo:
1 – A Vista – 15% de desconto;
2 – Cartão Débito – 10% de desconto;
3 – Cartão de Crédito – sem desconto;
4 – A Prazo – 10 % de acréscimo.
O aplicativo encerra-se quando digitado 0.
*/
#include <stdio.h>

int menu()
{
    int opc = 0;

    printf("\n\n----------MENU PARA PAGAMENTO----------");
    printf("\n1 – A Vista – 15%% de desconto\n2 – Cartão Débito – 10%% de desconto\n3 – Cartão de Crédito – sem desconto\n4 – A Prazo – 10 %% de acréscimo\nO aplicativo encerra-se quando digitado 0.\n\nEscolha: ");
    scanf("%d", &opc);

    return opc;
}

int main(void)
{
    float valor;
    int opc;

    printf("\nValor: ");
    scanf("%f", &valor);

    opc = menu();

    while (opc != 0)
    {
        switch (opc)
        {
        case 1:
            printf("\nValor a pagar: %.2f", valor - valor * 0.15);
            break;
        
        case 2:
            printf("\nValor a pagar: %.2f", valor - valor * 0.10);
            break;
        
        case 3:
            printf("\nValor a pagar: %.2f", valor);
            break;

        case 4:
            printf("\nValor a pagar: %.2f", valor + valor * 0.10);
            break;
        case 0:
            break;

        default:
            printf("\nInvalido!");

        }

        printf("\n\nNovo Valor: ");
        scanf("%f", &valor);

        opc = menu();
    }
    
    printf("\nPrograma encerrado...");

    return 0;
}