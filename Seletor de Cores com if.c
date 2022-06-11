#include <stdio.h>

int main()
{
    printf("---Menu de Cores---");
    printf("\n1 - Branco");
    printf("\n2 - Azul");
    printf("\n3 - Vermelho");
    printf("\n4 - Amarelo");
    printf("\n5 - Verde");
    
    int entrada;
    
    printf("\nSelecione uma cor da lista acima: ");
    scanf("%d",&entrada);
    
    while(entrada != 1 || entrada != 2 || entrada != 3 || entrada != 4 || entrada != 5)
    {
        printf("\nOpção Inválida! Selecione uma cor da lista acima: ");
        scanf("%d",&entrada);
        
        if(entrada == 1 || entrada == 2 || entrada == 3 || entrada == 4 || entrada == 5){
            if(entrada == 1){
                printf("\n\tA cor selecionada foi Branco!");
            }
    
            if(entrada == 2){
                printf("\n\tA cor selecionada foi Azul!");
            }
    
            if(entrada == 3){
                printf("\n\tA cor selecionada foi Vermelho!");
            }
    
            if(entrada == 4){
                printf("\n\tA cor selecionada foi Amarelo!");
            }
    
            if(entrada == 5){
                printf("\n\tA cor selecionada foi Verde!");
            }

    return 0;
        }
    }
}
