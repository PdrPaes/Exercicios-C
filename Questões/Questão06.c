#include <stdio.h>

int main()
{   
    int base, altura, area;

    printf("Informe o valor da base do retângulo: ");
    scanf("%d",&base);

    printf("Informe o valor da altura do retângulo: ");
    scanf("%d",&altura);

    area = base * altura;

    printf("O valor da area do Retangulo é %d metros quadrados",area);

    return 0;
}