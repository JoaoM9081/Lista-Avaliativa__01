#include <stdio.h>

int main(){

    char categoria;
    float salario, aumento;

    printf("Insira sua categoria (a, b ou c): \n");
    scanf(" %c", &categoria);

    while (categoria != 'a' && categoria != 'b' && categoria != 'c')
    {
        printf("Categoria invalida!!!\n");
        scanf(" %c", &categoria);
    }
    
    printf("Digite seu salario: \n");
    scanf("%f", &salario);

    switch(categoria) {
        case 'a': aumento = salario * 1.05; break;
        case 'b': aumento = salario * 1.07; break;
        case 'c': aumento = salario * 1.08; break;
    }
    
    printf("R$ %.2f\n", aumento);

    return 0;
}