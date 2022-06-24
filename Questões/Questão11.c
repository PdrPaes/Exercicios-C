/*Uma revendedora de carros usados paga a seus funcionários vendedores um 
salário fixo por mês,mais uma comissão também fixa para cada carro vendido
e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que 
leia o número de carros por ele vendidos, o valor total de suas vendas, o 
salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva 
o salário final do vendedor.
*/
#include <stdio.h>

int main()
{   
    float carros, vendasTotais,salario,valorCarro,valorFinal;

    printf("Informe o número de carros vendidos: ");
    scanf("%f",&carros);

    printf("\nInforme o valor total de suas vendas: ");
    scanf("%f",&vendasTotais);

    printf("\nInforme o Salário Fixo: ");
    scanf("%f",&salario);

    printf("\nInforme o valor recebido por carro vendido: ");
    scanf("%f",&valorCarro);

    valorFinal = salario + valorCarro + vendasTotais*0.05;

    printf("O valor total do Salário do Josicleisson é R$%.2f",valorFinal);

    return 0;
}