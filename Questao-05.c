#include <stdio.h>

int main(){

    int n1, n2;
    int maior, menor;

    scanf("%d", &n1);
    scanf("%d", &n2);
    
    if (n1 == n2)
    {
        printf("Os valores lidos sao iguais\n");
        return 0;
    } else if (n1 > n2)
    {
        maior = n1;
        menor = n2;
    } else{
        maior = n2;
        menor = n1;
    }
    
    printf("%d eh maior que %d\n", maior, menor);   

    if (menor == 0)
    {
        printf("%d nao eh multiplo de %d\n", maior, menor);
    }
    else if (maior % menor == 0)
    {
        printf("%d eh multiplo de %d\n", maior, menor);
    } else{
        printf("%d nao eh multiplo de %d\n", maior, menor);
    }
    
    return 0;
}