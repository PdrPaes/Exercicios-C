/*
Ler as notas da 1a. e 2a. avaliações de um aluno. Calcular a média 
aritmética simples e escrever uma mensagem que diga se o aluno foi 
ou não aprovado (considerar que nota igual ou maior que 6 o aluno 
é aprovado). Escrever também a média calculada.
*/
#include <stdio.h>

int main()
{   
    float n1,n2,media;

    printf("Informe a primeira nota: ");
    scanf("%f",&n1);

    printf("Informe a segunda nota: ");
    scanf("%f",&n2);

    media = (n1 + n2)/2;

    if(media >= 6){
        printf("O aluno foi Aprovado e a sua média final foi de %.2f",media);
    } else {
        printf("O aluno foi Reprovado e a sua média infeliz foi de %.2f",media);
    }

    return 0;
}