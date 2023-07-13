#include <stdio.h>

/*
    Faça um algoritmo que permita salvar 4 notas de um aluno em um vetor chamado "nota"
    Faça um menu que permite o usuário visualizar as seguintes informações
        1 - Média das notas
        2 - Maior nota
        3 - Menor nota
        4 - Situação do aluno {Aprovado, Reprovado}
        5 - Sair do menu
*/

int menu()
{
    int opc;

    printf("\n\n1 - Media\n2 - Maior nota\n3 - Menor nota\n4 - Situacao aluno\n5 - Sair\n\nSua resposta: ");
    setbuf(stdin,NULL);
    scanf("%d", &opc);

    return opc;
}

float media(float nota[])
{
    int i;
    float m=0;

    for ( i = 0; i < 4; i++)
    {
        m += nota[i]; 
    }

    return m /= 4;

}

float maior(float nota[])
{
    float m = 0;
    int i;

    for ( i = 0; i < 4; i++)
    {
        if(nota[i] > m)
        {
            m = nota[i];
        }
    }
    return m;
}

float menor(float nota[])
{
    float m = 11;
    int i;

    for ( i = 0; i < 4; i++)
    {
        if(nota[i] < m)
        {
            m = nota[i];
        }
    }
    return m;
}

void sit(float media)
{
    if(media >= 7 && media <= 10)
    {
        printf("\nAprovado!!!");
    }
    else
    {
        printf("\nReprovado!!!");
    }
}

int main(void)
{
    float nota[4];
    int i;
    int opc;

    for(i=0; i < 4; i++)
    {
        printf("\nNota %d: ", i+1);
        setbuf(stdin,NULL);
        scanf("%f", &nota[i]);
    }

    do
    {
        opc = menu();

        switch (opc)
        {
        case 1:
            printf("\nMedia do aluno: %.2f", media(nota));
            break;
        
        case 2:
            printf("\nMaior nota do aluno: %.2f", maior(nota));
            break;

        case 3:
            printf("\nMenor nota do aluno: %.2f", menor(nota));
            break;

        case 4:
            sit(media(nota));    
            break;
        
        case 5:
            printf("\nMenu encerrado!");
            break;

        default:
            printf("\nResposta invalida!");
            break;
        }
    } while (opc != 5);
    
    
    return 0;
}
