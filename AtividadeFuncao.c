#include <stdio.h>
int soma(int a, int b){
    //a = valor1
    int operacao;

    operacao = a + b;

    printf("\nO valor da soma: %d",operacao);
    return 0;
}

int mult(int x, int y){
    int operacao;

    operacao = x * y;

    printf("\nO valor da multiplicacao: %d",operacao);
    return 0;
}

int sub(int numero1, int numero2){
    int matematica;

    matematica = numero1 - numero2;

    printf("\nO valor da subtracao: %d", matematica);
    return 0;
}

int main(){
    int i,valor1 ,valor2;

    printf("Menu de Selecao");
    printf("\n1 - Soma");
    printf("\n2 - Multiplicacao");
    printf("\n3 - Subtracao\n-->");
    scanf("%d",&i);

    switch(i){
        case 1:{
            printf("\nMetodo Selecionado: Soma");
            printf("\nInforme o primeiro valor: ");
            scanf("%d",&valor1);
            printf("\nInforme o segundo valor: ");
            scanf("%d",&valor2);
            soma(valor1, valor2);
            break;
        }
        case 2:{
            printf("\nMetodo Selecionado: Multiplicacao");
            printf("\nInforme o primeiro valor: ");
            scanf("%d",&valor1);
            printf("\nInforme o segundo valor: ");
            scanf("%d",&valor2);
            mult(valor1, valor2);
            break;
        }
        case 3:{
            printf("\nMetodo Selecionado: Subtracao");
            printf("\nInforme o primeiro valor: ");
            scanf("%d",&valor1);
            printf("\nInforme o segundo valor: ");
            scanf("%d",&valor2);
            sub(valor1, valor2);
            break;
        }
    }
    return 0;
};
