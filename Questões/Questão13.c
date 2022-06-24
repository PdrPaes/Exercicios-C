#include <stdio.h>

int main()
{   
    float nota1,nota2,nota3,media;

    printf("Informe a primeira nota: ");
    scanf("%f",&nota1);
    printf("Informe a primeira nota: ");
    scanf("%f",&nota2);
    printf("Informe a primeira nota: ");
    scanf("%f",&nota3);

    media = (2*nota1 + 3*nota2 + 5*nota3)/10;

    printf("\nA média do aluno corresponde a %.2f pontos",media);
    return 0;
}