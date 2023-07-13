#include <stdio.h>

void drawTriangle(int height) {
    int i, j;

    for (i = 1; i <= height; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int height;

    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    printf("Triangle:\n");
    drawTriangle(height);

    return 0;
}
