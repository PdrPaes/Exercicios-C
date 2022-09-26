#include <stdio.h>
#include <math.h>

int imprimir(int resultado){
    printf("Resultado: %d",resultado);
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

int valores(int valor1, int valor2){

    printf("\nPrimeiro valor informado: %d",valor1);
    printf("\nSegundo valor informado: %d",valor2);

    soma(valor1,valor2);
    subtracao(valor1,valor2);
    multiplicacao(valor1,valor2);
}

int main(){
    int a,b;

    printf("Informe o valor a ser operado: ");
    scanf("%d",&a);

    printf("Informe o valor a ser operado: ");
    scanf("%d",&b);

    valores(a,b);
    return 0;
}
