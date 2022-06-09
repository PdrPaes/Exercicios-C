#include <stdio.h>
#include <math.h>
int main()
{
    int largura;
    int comprimento;
    int area;
    
    printf("Informe a largura do retangulo: ");
    scanf("%d",&largura);
    
    printf("Informe o comprimento do retangulo: ");
    scanf("%d",&comprimento);
    
    area = largura * comprimento;
    
    printf("O valor da area do retangulo corresponde a %d metros quadrados",area);
    
    return 0;
}
