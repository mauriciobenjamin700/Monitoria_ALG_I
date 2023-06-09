#include <stdio.h>

int main(void)
{
    //implementar maior par e maior
    int tamanho_entrada=0, entrada=0;
    int contador_pares=0, contador_impares=0;
    int soma_pares=0, soma_impares=0;
    int maior=0, menor=0;

    float media_par=0, media_impar=0;
    float porcentagem_pares=0, porcentagem_impares=0;

    int i=0;

    printf("\nQuantidade de numeros informados: ");
    fflush(stdin);
    scanf("%d", &tamanho_entrada);

    while (i<tamanho_entrada)
    {
        printf("\nNumero: ");
        fflush(stdin);
        scanf("%d", &entrada);

        //calculando menor
        if (menor==0)
        {
            menor = entrada;
        }
        else if (entrada < menor)
        {
            menor = entrada;
        }

        //calculando maior
        if (entrada> maior)
        {
            maior = entrada;
        }

        //calculando pares e impartes
        if (entrada%2==0)
        {
            soma_pares += entrada;
            contador_pares++;
        }
        else
        {
            soma_impares += entrada;
            contador_impares ++;
        } 
        i++;
    }

    //calculando a media
    if (contador_pares>0){
    media_par = soma_pares/contador_pares;
    }
    if(contador_impares>0){
    media_impar = soma_impares/contador_impares;
    }

    //calculando as porcentagens
    if (contador_pares>0){
    porcentagem_pares = ((float)contador_pares/tamanho_entrada)*100;
    }
    if (contador_impares>0){
    porcentagem_impares = ((float)contador_impares/tamanho_entrada)*100;
    }

    //saida para usuário


    printf("\n-----Pares-----:\n");
    printf("Quantidade: %d\nSoma: %d\nMedia: %.2f\nPorcentagem: %.2f%%\n",contador_pares, soma_pares, media_par, porcentagem_pares);


    
    printf("\n-----Impares-----:\n");
    printf("Quantidade: %d\nSoma: %d\nMedia: %.2f\nPorcentagem: %.2f%%\n",contador_impares, soma_impares, media_impar, porcentagem_impares);

    printf("\n\nMaior valor: %d\nMenor valor: %d", maior, menor);
    

    return 0;
}