#include <stdio.h>

int operacao(int valor1, int valor2){
    int resultado;

    resultado = valor1 / valor2;
    printf("\nResultado Divisao: %d",resultado);

    resultado = valor1 * valor2;
    printf("\nResultado Multiplicacao: %d",resultado);

    resultado = valor1 + valor2;
    printf("\nResultado Soma: %d",resultado);

    resultado = valor1 - valor2;
    printf("\nResultado Subtracao: %d",resultado);
}

int main(){
    int i,f;
    
    for(i=1;i<=10;i++){
        for(f=1;f<=10;f++){
            operacao(i,f);
        }
    }

    return 0;
}
