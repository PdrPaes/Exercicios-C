/*
Ler dois valores (considere que não serão lidos valores iguais) 
e escrever o maior deles.
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
        printf("O maior valor informado foi %d",a);
    } else {
        printf("O maior valor informado foi %d",b);
    }

    return 0;
}