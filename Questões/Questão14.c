#include <stdio.h>

int main()
{   
    int valor;
    printf("Informe um valor: ");
    scanf("%d",&valor);

    if(valor >= 10){
        printf("\nO valor informado é maior que 10!");
    } else {
        printf("\nO valor informado é menor que 10!");
    }
     return 0;
}