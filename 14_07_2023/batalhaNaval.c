//Enunciado
/*
Detalhes e regras para essa tarefas:
    
    Detalhes:
    1 - Cada navio ocupa apenas uma posição no tabuleiro
    2 - O tabuleiro deve ser quadrado
    3 - Tabuleiro 5x5    Mudei de ideia (Sua area (Linhas x Colunas) deve ser maior que 25 e menor que 100)
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


int main(void)
{
    int quantidadeNavios, placar1=0, placar2=0, tamanho = 5;
    char player1[10], player2[10];

    srand(time(NULL));
    
/*
    do
    {
        printf("\n\nTamanho do tabuleiro: ");
        setbuf(stdin,NULL);
        scanf("%d", &tamanho);
        area = tamanho * tamanho;

    } while (area < 25 || area > 100 );
*/
    do
    {
        printf("\n\nQuantidade de navios: ");
        setbuf(stdin,NULL);
        scanf("%d", &quantidadeNavios);
        
    } while (quantidadeNavios < 1 || quantidadeNavios > 5 );

    printf("\nNome do jogador 1: ");
    setbuf(stdin,NULL);
    scanf("%s", player1);

    printf("\nNome do jogador 2: ");
    setbuf(stdin,NULL);
    scanf("%s", player2);
    

    char matriz[tamanho][tamanho], tabuleiro[tamanho][tamanho];

    int i,j;

    //preenche a matriz com 'O'
    for ( i = 0; i < tamanho; i++)
    {
        for ( j = 0; j < tamanho; j++)
        {
            matriz[i][j] = 'O';
            tabuleiro[i][j] = 'O';
        }
    }
    
    //posições para adicionar os barcos


    //preenche os navios do jogador 1
    for ( i = 0; i < quantidadeNavios; i++)
    {
        if(matriz[rand() % tamanho][rand() % tamanho] == 'O')
        {
            matriz[rand() % tamanho][rand() % tamanho] = 'S';  // Gera números aleatórios de 0 até o valor padrão da area
        }
        else
        {
            i--;
        }
    }
        
    
    //preenche os navios do jogador 2
    for ( i = 0; i < quantidadeNavios; i++)
    {
        if(matriz[rand() % tamanho][rand() % tamanho] == 'O')
        {
            matriz[rand() % tamanho][rand() % tamanho] = 'Z';  // Gera números aleatórios de 0 até o valor padrão da area
        }
        else
        {
            i--;
        }
    }

    while (placar1 != quantidadeNavios || placar2 != quantidadeNavios)
    {
        //mostra o tabuleiro
        printf("\n\n");
        for (i = 0; i < tamanho; i++)
        {
            for ( j = 0; j < tamanho; j++)
            {
                printf("%c ", tabuleiro[i][j]);
            }
            printf("\n");
            
        }
        
        //jogador 1
        printf("\n\nEscolha sua coordenada no tabuleiro %s !", player1);
        
        printf("\n\nLinha: ");
        setbuf(stdin,NULL);
        scanf("%d", &i);

        printf("\nColuna: ");
        setbuf(stdin,NULL);
        scanf("%d", &j);

        if(i>= tamanho || j >= tamanho)
        {
            printf("\n\nCoordenada invalida no tabuleiro! Perdeu a vez!");
        }
        else
        {
            if(matriz[i][j] == 'O')
            {
                printf("\n\nVoce errou!\n\n");
            }
            else if (matriz[i][j] == 'Z'){
                printf("\n\nVoce Acertou!\n\n");
                placar1++;
                tabuleiro[i][j] = 'Z';
            }
        //mostra o tabuleiro

        for (i = 0; i < tamanho; i++)
        {
            for ( j = 0; j < tamanho; j++)
            {
                printf("%c ", tabuleiro[i][j]);
            }
            printf("\n");
            
        }
    }

    //jogador 2
    printf("\n\nEscolha sua coordenada no tabuleiro %s !", player2);
        
        printf("\n\nLinha: ");
        setbuf(stdin,NULL);
        scanf("%d", &i);

        printf("\nColuna: ");
        setbuf(stdin,NULL);
        scanf("%d", &j);

        if(i>= tamanho || j >= tamanho)
        {
            printf("\n\nCoordenada invalida no tabuleiro! Perdeu a vez!");
        }
        else
        {
            if(matriz[i][j] == 'O')
            {
                printf("\n\nVoce errou!\n\n");
            }
            else if (matriz[i][j] == 'S')
            {
                printf("\n\nVoce Acertou!\n\n");
                placar2++;
                tabuleiro[i][j] = 'S';
            }

    }

    printf("\n\n----------PLACAR----------");
    printf("\n%s: %d", player1,placar1);
    printf("\n%s: %d", player2,placar2);

    }

    return 0;
}