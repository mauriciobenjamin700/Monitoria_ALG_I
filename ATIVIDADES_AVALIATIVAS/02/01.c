#include <stdio.h>

int main(void)
{
    char entrada=' ';
    int cont_m = 0, cont_f = 0;

    while (entrada != '@')
    {
        printf("\nGenero: ");
        setbuf(stdin, NULL);
        scanf("%c", &entrada);

        if(entrada=='m' || entrada == 'M')
        {
            cont_m++;
        }
        else if (entrada=='f' || entrada == 'F')
        {
            cont_f++;
        }

    }
    
    printf("\nQuantidade M == %d\nQuantidade F == %d", cont_m,cont_f);

    
    return 0;
}