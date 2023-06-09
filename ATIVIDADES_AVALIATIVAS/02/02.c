#include <stdio.h>

int main(void)
{
    int excelente=3, bom=2, regular=1, opiniao=0;
    int idade;
    int q_excelente=0, q_bom=0, q_regular=0; // q == quantidade de votos
    float m_excelente=0, m_bom=0, m_regular=0;// m == media idades
    float p_excelente=0, p_bom=0, p_regular=0;// p == porcentagem das respostas
    

    int n;

    printf("\nQuantidade de expectadores: ");
    //setbuf(stdin, NULL);
    scanf("%d", &n);

    int i=0;

    while (i<n)
    {
        printf("\nOpiniao: ");
        setbuf(stdin, NULL);
        scanf("%d", &opiniao);

        printf("\nIdade: ");
        setbuf(stdin, NULL);
        scanf("%d", &idade);        

        if(opiniao==excelente)
        {
            q_excelente ++;
            m_excelente+= idade;
        }
        else if (opiniao==bom)
        {
            q_bom ++;
            m_bom += idade;
        }
        else if (opiniao == regular)
        {
            q_regular++;
            m_regular+=idade;
        }
        else
        {
            printf("\nDigite direito!\n");
        }
        i++;
    }

    //calculando a media
    m_excelente = (float) m_excelente/q_excelente;

    m_bom = (float) m_bom/q_bom;

    m_regular = (float) m_regular/q_regular;

    // calculando a porcentagem

    p_excelente = (float) q_excelente/n;

    p_bom = (float) q_bom/n;

    p_regular = (float) q_regular/n;

    //prints
    printf("-----Prints-----");
    printf("\nQuantidade Excelente: %d\nMedia Excelente: %2.2f\nPorcentagem Excelente: %2.2f\n", q_excelente,m_excelente,p_excelente);
    printf("\nQuantidade Bom: %d\nMedia Bom: %2.2f\nPorcentagem Bom: %.2f\n", q_bom,m_bom,p_bom);
    printf("\nQuantidade Regular: %d\nMedia Regular: %2.2f\nPorcentagem Regular: %2.2f\n", q_regular,m_regular,p_regular);

    return 0;
    
}
