// A prefeitura permitiu empréstimos a seus funcionários onde o valor máximo da prestação não pode ultrapassar 30% do salário. Dados os valores do salário, o valor do empréstimo, a quantidade de prestações do pagamento do empréstimo  e  a  taxa  de  juros  cobrada  no  empréstimo;  informa  se  o  empréstimo  é  permitido  ou  não,  se  o empréstimo for permitido, informar o valor da prestação e o valor total a pagar


#include <stdio.h>

int main(void)
{
    float salario, valor_emprestimo, quantidade_parcelas, taxa_juros;
    float divida, valor_parcela;

    printf("\nSalario: ");
    scanf("%f", &salario);

    printf("\nValor do emprestimo: ");
    scanf("%f", &valor_emprestimo);

    printf("\nQuantidade de parcelas: ");
    scanf("%f", &quantidade_parcelas);

    printf("\nTaxa de juros: ");
    scanf("%f", &taxa_juros);

    divida = valor_emprestimo + (valor_emprestimo*taxa_juros);

    valor_parcela = divida/quantidade_parcelas;

    if (valor_parcela > (0.3*salario))
    {
        printf("\nImprestimo Negado!");
    }
    else
    {
        printf("\nImprestimo Aprovado!\n\nValor da Parcela: %.2f\nValor Total a pagar: %.2f", valor_parcela, divida);
    }

    return 0;
}