#include <stdio.h>

int main(){

    // SC = senha cadastrada, SI = senha inserida //

    int SC, SI;
    
    do
    {   
        printf("Insira uma senha para ser cadastrada (4 digitos): \n");
        scanf("%d", &SC);

        if (SC >= 1000 && SC < 9999){   
            printf("senha cadastrada: %d\n", SC); break;
        } else{  
            printf("digite 4 digitos para cadastrar sua senha!!!\n");
        }

    } while (1);

    do
    {
        printf("Insira sua senha: \n");
        scanf("%d", &SI);

        if(SI == SC){
            printf("senha valida!\n"); break;
        } else{
            printf("senha invalida!\n");
        }
    } while (1);
    
    return 0;
}