#include <stdio.h>

int main(){
    int i;

    printf("Selecione uma das opcoes: ");
    printf("\n1 - Soma ");
    printf("\n2 - Subtracao ");
    printf("\n3 - Multiplicacao ");
    printf("\n4 - Divisao ");
    printf("\n5 - Potencia ");
    printf("\n---> ");
    scanf("%d",&i);

    switch(i){
        case 1:{
            printf("\nOperacao selecionada: Soma");
            break;
        }
        case 2:{
            printf("\nOperacao selecionada: Subtracao");
            break;
        }
        case 3:{
            printf("\nOperacao selecionada: Multiplicacao");
            break;
        }
        case 4:{
            printf("\nOperacao selecionada: Divisao");
            break;
        }
        case 5:{
            printf("\nOperacao selecionada: Potencia");
            break;
        }
    }
    return 0;
}
