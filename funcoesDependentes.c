#include <stdio.h>
#include <math.h>

int imprimir(int resultado){
    printf("Resultado da operacao: %d",resultado);
}

int soma(int valor1, int valor2){
    int resultado;

    resultado = valor1 + valor2;

    printf("\nSoma -> ");
    imprimir(resultado);
}

int subtracao(int valor1, int valor2){
    int resultado;

    resultado = valor1 - valor2;

    printf("\nSubtracao -> ");
    imprimir(resultado);
}

int multiplicacao(int valor1, int valor2){
    int resultado;

    resultado = valor1 * valor2;

    printf("\nMultiplicacao -> ");
    imprimir(resultado);
}

int operacoes(int a, int b){
    soma(a,b);
    subtracao(a,b);
    multiplicacao(a,b);
}

int main(){
    int a,b;

    printf("Informe o valor a ser processado: ");
    scanf("%d",&a);

    printf("Informe o valor a ser processado: ");
    scanf("%d",&b);

    operacoes(a,b);

    return 0;
}
