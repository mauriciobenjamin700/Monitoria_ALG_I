/*
02 – Fazer um programa que fique lendo dois números e um caractere. O caractere será uma
opção escolhida pelo usuário de como manipular os dois números. O algoritmo deverá exibir o
menu de opções abaixo e o programa só será finalizado quando for digitado a opção D:
--------------------------------------------------
MENU
--------------------------------------------------
A – Maior Número
B – Menor Número
C – Média Aritmética
D – Finalizar
*/

#include <stdio.h>

char menu()
{
    char opc;

    printf("\n\n----------MENU PARA PAGAMENTO----------");
    printf("\nA – Maior Número\nB – Menor Número\nC – Média Aritmética\nD – Finalizar\n\nEscolha: ");
    setbuf(stdin,NULL);
    scanf("%c", &opc);

    return opc;
}

int main(void)
{
    float n1,n2;
    char opc;

    printf("\nNumero 1: ");
    scanf("%f", &n1);

    printf("\nNumero 2: ");
    scanf("%f", &n2);

    opc = menu();

    while (opc != 'D')
    {
        switch (opc)
        {
        case 1:
            printf("\nValor a pagar: %.2f", valor - valor * 0.15);
            break;
        
        case 2:
            printf("\nValor a pagar: %.2f", valor - valor * 0.15);
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