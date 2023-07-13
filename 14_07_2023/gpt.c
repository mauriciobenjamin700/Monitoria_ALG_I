#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 10
#define NUM_SHIPS 5

// Inicializa o tabuleiro
void initializeBoard(char board[][BOARD_SIZE]) {
    int i, j;
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = '-';
        }
    }
}

// Exibe o tabuleiro
void displayBoard(char board[][BOARD_SIZE]) {
    int i, j;
    printf("\n  ");
    for (i = 0; i < BOARD_SIZE; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (i = 0; i < BOARD_SIZE; i++) {
        printf("%d ", i);
        for (j = 0; j < BOARD_SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Posiciona os navios aleatoriamente no tabuleiro
void placeShips(char board[][BOARD_SIZE]) {
    int i, shipRow, shipCol;
    srand(time(NULL));
    for (i = 0; i < NUM_SHIPS; i++) {
        do {
            shipRow = rand() % BOARD_SIZE;
            shipCol = rand() % BOARD_SIZE;
        } while (board[shipRow][shipCol] != '-');
        board[shipRow][shipCol] = 'S'; // 'S' representa um navio
    }
}

int main() {
    char board[BOARD_SIZE][BOARD_SIZE];
    int guessRow, guessCol, attempts, hits;

    printf("Batalha Naval - Solo Player\n");
    printf("---------------------------\n");

    initializeBoard(board);
    placeShips(board);
    attempts = 0;
    hits = 0;

    while (hits < NUM_SHIPS) {
        displayBoard(board);

        printf("Tentativa %d\n", attempts + 1);
        printf("Informe a linha do seu palpite: ");
        scanf("%d", &guessRow);
        printf("Informe a coluna do seu palpite: ");
        scanf("%d", &guessCol);

        if (guessRow < 0 || guessRow >= BOARD_SIZE || guessCol < 0 || guessCol >= BOARD_SIZE) {
            printf("Palpite inválido! Tente novamente.\n\n");
            continue;
        }

        if (board[guessRow][guessCol] == 'S') {
            printf("Parabéns! Você acertou um navio!\n\n");
            board[guessRow][guessCol] = 'X'; // 'X' representa um navio afundado
            hits++;
        } else if (board[guessRow][guessCol] == '-' || board[guessRow][guessCol] == 'X') {
            printf("Você errou. Tente novamente.\n\n");
            board[guessRow][guessCol] = 'O'; // 'O' representa um palpite falho
        } else {
            printf("Você já tentou essa posição. Tente novamente.\n\n");
        }

        attempts++;
    }

    displayBoard(board);
    printf("Parabéns! Você afundou todos os navios inimigos em %d tentativas!\n", attempts);

    return 0;
}
