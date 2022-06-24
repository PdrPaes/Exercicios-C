#include <stdio.h>

int main()
{   
    float salario, aumento, final;
    printf("Informe o salário do funcionário: ");
    scanf("%f",&salario);

    printf("Informe a porcentagem do aumento: ");
    scanf("%f",&aumento);

    final = salario + (salario*aumento/100);

    printf("\nO novo salário do funcionário corresponde a %.2f reais",final);
    return 0;
}