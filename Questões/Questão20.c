/*
Ler dois valores (considere que não serão lidos valores iguais) e 
escrevê-los em ordem crescente.
*/
#include <stdio.h>

int main()
{   
    int a,b;

    printf("Informe o primeiro valor: ");
    scanf("%d",&a);

    printf("Informe o segundo valor: ");
    scanf("%d",&b);

    if(a>b){
        printf("%d e %d",b,a);
    } else {
        printf("%d e %d",a,b);
    }
    return 0;
}