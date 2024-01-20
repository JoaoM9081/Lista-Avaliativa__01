#include <stdio.h>

int main(){

    char categoria;
    float salario, aumento;

    scanf(" %c", &categoria);
    
    scanf("%f", &salario);

    switch(categoria) {
        case 'a': aumento = salario * 1.05; break;
        case 'b': aumento = salario * 1.07; break;
        case 'c': aumento = salario * 1.08; break;
    }
    
    printf("R$ %.2f\n", aumento);

    return 0;
}