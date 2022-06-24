#include <stdio.h>

int main()
{   
    int valor;
    printf("Informe um valor: ");
    scanf("%d",&valor);

    if(valor >= 0){
        printf("\nO valor informado é POSITIVO");
    } else {
        printf("\nO valor informado é NEGATIVO");
    }
     return 0;
}