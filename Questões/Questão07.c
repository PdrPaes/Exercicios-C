#include <stdio.h>

int main()
{   
    int ano,meses,dias,idade;

    printf("Informe quantos anos você tem: ");
    scanf("%d",&ano);

    printf("Informe quantos meses você tem: ");
    scanf("%d",&meses);

    printf("Informe quantos dias você tem: ");
    scanf("%d",&dias);

    idade = ano*365 + meses*30 + dias;

    printf("\nA idade do usuário, em dias corresponde a %d",idade);
    return 0;
}