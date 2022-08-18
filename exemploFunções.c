int soma(int a, int b){
    //a = valor1
    int operacao;

    operacao = a + b;

    printf("\nO valor da soma: %d",operacao);
}

int mult(int x, int y){
    int operacao;

    operacao = x * y;

    printf("\nO valor da multiplicacao: %d",operacao);
}

int sub(int numero1, int numero2){
    int matematica;

    matematica = numero1 - numero2;

    printf("\nO valor da subtracao: %d", matematica);
}

int main(){
    int i,valor1 = 10,valor2 = 5;

    printf("Menu de Selecao");
    printf("\n1 - Soma");
    printf("\n2 - Multiplicacao");
    printf("\n3 - Subtracao\n-->");
    scanf("%d",&i);

    switch(i){
        case 1:{
            soma(valor1, valor2);
            break;
        }
        case 2:{
            mult(valor1, valor2);
            break;
        }
        case 3:{
            sub(valor1, valor2);
            break;
        }
    }
    return 0;
};
