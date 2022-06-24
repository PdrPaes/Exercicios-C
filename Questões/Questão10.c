/*
O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do
distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do
distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de 
fábrica de um carro, calcular e escrever o custo final ao consumidor.
*/
#include <stdio.h>

int main()
{
    float cFabrica,cImpostos,cDistribuidor,cConsumidor;

    printf("Informe o valor do custo de fabricação do veículo: ");
    scanf("%f",&cFabrica);

    cImpostos = cFabrica * 0.45;
    cDistribuidor = cFabrica * 0.28;
    cConsumidor = cFabrica + cImpostos + cDistribuidor;

    printf("\nO valor final do produto será R$%.2f",cConsumidor);
    return 0;
}
