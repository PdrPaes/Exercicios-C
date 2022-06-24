/*
Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma mensagem 
que diga se ela poderá ou não votar este ano (não é necessário considerar 
o mês em que a pessoa nasceu).
*/
#include <stdio.h>

int main()
{   
    int ano, idade;

    printf("Informe o ano de nascimento: ");
    scanf("%d",&ano);

    idade = 2022 - ano;

    if(idade >= 16){
        printf("O cidadão pode votar!");
    } else {
        printf("O cidadão não possui idade legal para votar!");
    }

    return 0;
}