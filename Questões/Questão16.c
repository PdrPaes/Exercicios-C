/*
As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e 
R$ 1,00 se forem compradas pelo menos 12. Escreva um programa que leia o 
número de maçãs compradas, calcule e escreva o custo total da compra.
*/

#include <stdio.h>

int main()
{   
    float quantidade,valor,valorTotal;
    
    printf("Informe o número de maçãs compradas: ");
    scanf("%f",&quantidade);

    if(quantidade >= 12){
        valor = 1.00;
    } else {
        valor = 1.30;
    }

    valorTotal = quantidade * valor;

    printf("O valor total é R$%.2f",valorTotal);

    return 0;
}