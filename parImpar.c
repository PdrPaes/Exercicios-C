#include <stdio.h>

int main()
{
    int numero;
    
    printf("Informe o valor: ");
    scanf("%d",&numero);
    
    if(numero%2 == 0){
        printf("\nO valor %d é par",numero);
    } else {
        printf("\nO valor %d é ímpar",numero);
    }
    
    return 0;
}
