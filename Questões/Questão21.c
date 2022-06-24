#include <stdio.h>

int main()
{   
    int inicio,termino,duracao;

    printf("Informe a hora de início do jogo de Xadrez: ");
    scanf("%d",&inicio);

    printf("\nInforme a hora de término do jogo de Xadrez: ");
    scanf("%d",&termino);

    if(termino <= inicio){
        duracao = (24 - inicio) + termino;
    } else {
        duracao = termino - inicio;
    }

    if(duracao > 24){
        printf("\nPartida Empatada! Tempo acabou!");
        return 0;
    } else {
        printf("\nA duração da partida foi de %d horas",duracao);
    }
   
    return 0;
}