#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 5

void jogadores(char player1[], char player2[])
{
    //Nomes dos jogadores 1 e 2
    printf("\nNome do jogador 1: ");
    setbuf(stdin,NULL);
    scanf("%s", player1);

    printf("\nNome do jogador 2: ");
    setbuf(stdin,NULL);
    scanf("%s", player2);

}

int qNavios()
{
    int quantidadeNavios;
    do
    {
        printf("\n\nQuantidade de navios: ");
        setbuf(stdin,NULL);
        scanf("%d", &quantidadeNavios);
        
    } while (quantidadeNavios < 1 || quantidadeNavios > 5 );

    return quantidadeNavios;
}

void preenche(char matriz[tamanho][tamanho], char tabuleiro[tamanho][tamanho])
{
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
}

void addNavios(char matriz[tamanho][tamanho],int quantidadeNavios,char navio)
{
    int i;
    int x,y;
    srand(time(NULL));

    for ( i = 0; i < quantidadeNavios; i++)
    {
        x = rand() % tamanho;
        y = rand() % tamanho;
        if(matriz[x][y] == 'O')
        {
            matriz[x][y] = navio;  // Gera números aleatórios de 0 até o valor padrão da area
        }
        else
        {
            i--;
        }
    }
}

void mostrarTabuleiro(char tabuleiro[tamanho][tamanho])
{
    int i,j;

    for (i = 0; i < tamanho; i++)
    {
        for ( j = 0; j < tamanho; j++)
        {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
        
    }   
}

int jogada(char player[], char matriz[tamanho][tamanho], char tabuleiro[tamanho][tamanho] ,int placar, char navio)
{
    int i,j;

    printf("\n\nEscolha sua coordenada no tabuleiro %s !", player);
    
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
        else if (matriz[i][j] == navio){
            printf("\n\nVoce Acertou!\n\n");
            placar = placar + 1;
            tabuleiro[i][j] = navio;
        }
    //mostra o tabuleiro

    mostrarTabuleiro(tabuleiro);

    }

    return placar;
}


int main(void)
{
    int quantidadeNavios, placar1=0, placar2=0;// area,tamanho;
    char player1[10], player2[10];

    jogadores(player1,player2);

    quantidadeNavios = qNavios();
    
    char matriz[tamanho][tamanho], tabuleiro[tamanho][tamanho];
 
    preenche(matriz,tabuleiro);
    
    //preenche os navios do jogador 1
    addNavios(matriz, quantidadeNavios,'S');
        
    //preenche os navios do jogador 2
    addNavios(matriz, quantidadeNavios,'Z');

    //enquanto ninguem vencer
    while (placar1 < quantidadeNavios || placar2 < quantidadeNavios)
    {
        //mostra o tabuleiro
        printf("\n\n");
        mostrarTabuleiro(tabuleiro);

        //jogador 1
        placar1 = jogada(player1, matriz, tabuleiro, placar1, 'Z');
  
        //jogador 2
        placar2 = jogada(player2, matriz, tabuleiro, placar2, 'S');
  
    printf("\n\n----------PLACAR----------");
    printf("\n%s: %d", player1,placar1);
    printf("\n%s: %d", player2,placar2);

    }

    return 0;
}