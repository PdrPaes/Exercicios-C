/*
Escreva um algoritmo para ler o número total de eleitores 
de um município, o número de votos brancos, nulos e 
válidos. Calcular e escrever o percentual que cada um 
representa em relação ao total de eleitores.
*/
#include <stdio.h>

int main()
{   
    int eleitores, brancos, nulos, validos, pb, pn, pv;
    printf("Informe o número total de eleitores do município: ");
    scanf("%d",&eleitores);

    printf("\nInforme o número total de VOTOS BRANCOS: ");
    scanf("%d",&brancos);

    printf("\nInforme o número total de VOTOS NULOS: ");
    scanf("%d",&nulos);

    printf("\nInforme o número total de VOTOS VÁLIDOS: ");
    scanf("%d",&validos);

    if((brancos + nulos + validos) < eleitores){
        nulos = nulos + (eleitores - (brancos + nulos + validos));
    }

    if((brancos + nulos + validos) > eleitores){
        printf("\nVOTAÇÃO FRAUDADA! CHAMA A POLÍCIA!");
        return 0;
    } 

    pb = (brancos*100)/eleitores;
    pn = (nulos*100)/eleitores;
    pv = (validos*100)/eleitores;

    printf("\n\tA porcentagem de VOTOS BRANCOS É %d",pb);
    printf("\n\tA porcentagem de VOTOS NULOS É %d",pn);
    printf("\n\tA porcentagem de VOTOS VALIDOS É %d",pv);

    return 0;
}