//Enunciado
/*
Detalhes e regras para essa tarefas:
    
    Detalhes:
    1 - Cada navio ocupa apenas uma posição no tabuleiro
    2 - O tabuleiro deve ser quadrado
    3 - Sua area (Linhas x Colunas) deve ser maior que 25 e menor que 100
    4 - a quantidade de navios é escolhida pelo usuário, variando entre 1 e 5
    5 - Os navios do jogador 1 são representados pelo caractere 'S'
    6 - Os navios do jogador 2 são presentados pelo caractere 'Z'
      - Os demais são preenchidos com o caractere 'O'
    7 - O jogo deve possuir um placar, que mostra quantos navios o jogador ja abateu
    8 - O placar deve mostrar os nomes dos jogadores (Primeiro nome Apenas)

    
    Regras:
    1 - O jogo será feito para dois jogares
    2 - cada jogador faz um ataque e passa sua vez para o outro jogador
    3 - Se o jogador acertar uma embarcação, podera atacar novamente 
    4 - Quando todos os navios de um jogador forem destruidos, o mesmo perde e o programa encerra!


*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define name_size

int main(void)
{
    int tamanho, quantidadeNavios, placar1=0, placar2=0, area, num;
    char player1[20], player2[20];

    srand(time(NULL));
    

    do
    {
        printf("\n\nTamanho do tabuleiro: ");
        setbuf(stdin,NULL);
        scanf("%d", &tamanho);
        area = tamanho * tamanho;

    } while (area > 25 && area < 100 );

    do
    {
        printf("\n\nQuantidade de navios: ");
        setbuf(stdin,NULL);
        scanf("%d", &quantidadeNavios);
        
    } while (quantidadeNavios > 0 && quantidadeNavios < 6 );

    printf("\nNome do jogador 1: ");
    setbuf(stdin,NULL);
    scanf("%s", player1);

    printf("\nNome do jogador 2: ");
    setbuf(stdin,NULL);
    scanf("%s", player2);
    

    char matriz[tamanho][tamanho];

    int i,j;

    //preenche a matriz com 'O'
    for ( i = 0; i < quantidadeNavios; i++)
    {
        for ( j = 0; j < quantidadeNavios; i++)
        {
            matriz[i][j] = 'O';
        }
    }
    
    //preenche os navios do jogador 1
    for ( i = 0; i < quantidadeNavios; i++)
    {
        matriz[rand() % tamanho][rand() % tamanho] = 'S';  // Gera números aleatórios de 0 até o valor padrão da area
    }
    
    //preenche os navios do jogador 2
    for ( i = 0; i < quantidadeNavios; i++)
    {
        matriz[rand() % tamanho][rand() % tamanho] = 'Z';  // Gera números aleatórios de 0 até o valor padrão da area
    }

    return 0;

}