#include <stdio.h>

int main(){

    int n, digito, soma = 0;

    scanf("%d", &n);
    
    if (n >= 0)
   {
        if (n % 2 == 0){
    printf("%d eh par\n", n);
    
    }   else{
    printf("%d eh impar\n", n);
    }
   }
   
    int nt = n;
    while (nt > 0)
    {
        digito = nt % 10;
        soma += digito;
        nt /= 10;
    }
    
    if (n >= 0)
    {
        printf("A soma dos algarismos de %d eh %d\n", n, soma);
    }
    
    return 0;
}