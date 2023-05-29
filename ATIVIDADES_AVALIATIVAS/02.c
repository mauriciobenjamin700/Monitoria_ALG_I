//Em  um campeonato  nacional  de  arco-e-flecha  tem-se  equipes  de  três  jogadores  para  cada estado. Sabendo-se  que  cada  jogador  não  recebe,  necessariamente, a  mesma  quantidade  de  pontos,  fazer  um algoritmo que dados os pontos obtidos por cada jogador, exibir:(0,5 Pontos)•Os pontos em ordem crescente;•Se a soma dos pontos for maior ou igual a 100 exibir a média, caso contrário exibir “equipe desclassificada”

#include <stdio.h>

int main(void)
{
    float pontos;
    float jogador1, jogador2, jogador3;

    printf("\nPontuacao do jogador 1: ");
    scanf("%f", &jogador1);

    printf("\nPontuacao do jogador 2: ");
    scanf("%f", &jogador2);

    printf("\nPontuacao do jogador 3: ");
    scanf("%f", &jogador3);

    printf("\n\nPontos em ordem crescente: ");
    
    if (jogador1 > jogador2 && jogador1 > jogador3)
    {
        if (jogador2>jogador3)
        {
            printf("%.1f %.1f %.1f", jogador3, jogador2, jogador1);
        }
        else if (jogador2 < jogador3)
        {
            printf("%.1f %.1f %.1f", jogador2, jogador3, jogador1);
        }
        else
        {
             printf("%.1f %.1f %.1f", jogador2, jogador3, jogador1);
        }
    }

    else if (jogador2 > jogador1 && jogador2 > jogador3)
    {
        if (jogador1>jogador3)
        {
            printf("%.1f %.1f %.1f", jogador3, jogador1, jogador2);
        }
        else if (jogador1 < jogador3)
        {
            printf("%.1f %.1f %.1f", jogador1, jogador3, jogador2);
        }
        else
        {
             printf("%.1f %.1f %.1f", jogador1, jogador3, jogador2);
        }
    }

    else if (jogador3 > jogador1 && jogador3 > jogador2)
    {
        if (jogador1>jogador2)
        {
            printf("%.1f %.1f %.1f", jogador2, jogador1, jogador3);
        }
        else if (jogador1 < jogador2)
        {
            printf("%.1f %.1f %.1f", jogador1, jogador2, jogador3);
        }
        else
        {
             printf("%.1f %.1f %.1f", jogador1, jogador2, jogador3);
        }
    }
    else
    {
        printf("%.1f %.1f %.1f", jogador1, jogador2, jogador3);
    }


    pontos = jogador1+jogador2+jogador3;

    if (pontos>= 100)
    {
        printf("\nMedia = %.2f", pontos/3);
    }
    else
    {
        printf("\nEquipe desqualificada! ");
    }

    return 0;
}