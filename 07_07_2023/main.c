#include <stdio.h>
#include <stdlib.h>

int menu()
{
    int opc;

    printf("\n----------Menu----------");
    printf("\n1 - Triangulo\n2 - Quadrado\n3 - Retangulo\n0 - Sair\n\nResposta: ");
    scanf("%d", &opc);

    return opc;
}

void triangulo(int altura)
{
    int i, j;

    for (i = 0; i < altura; i++) {
        for (j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void quadrado(int tamanho)
{
    int i,j;

    for(i=0;i<tamanho;i++)
    {
        for (j=0;j<tamanho;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void retangulo(int largura, int altura)
{
    int i,j;

    for(i=0;i<altura;i++)
    {
        for (j=0;j<largura;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}


int main(void)
{
    int opc, valor;

    do
    {
        opc = menu();

        switch (opc)
        {
        case 0:
            printf("\nEncerrando ...");
            break;
        
        case 1:
            printf("\nAlgura do triangulo: ");
            setbuf(stdin,NULL);
            scanf("%d", &valor);
            triangulo(valor);
            break;
        case 2:
            printf("\nTamanho do quadrado: ");
            setbuf(stdin,NULL);
            scanf("%d", &valor);
            quadrado(valor);
            break;

        case 3:
            int altura;
            printf("\nLargura e altura do retangulo: ");
            setbuf(stdin,NULL);
            scanf("%d %d", &valor, &altura);
            retangulo(valor, altura);
            break;

        default:
            printf("\nResposta invalida!");
            break;
        }
    } 
    while (opc !=0 );
    

    return 0;
}