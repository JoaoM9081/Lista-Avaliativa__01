#include <stdio.h>

int main(){

    // SC = senha cadastrada, SI = senha inserida //

    int SC, SI;
    
    scanf("%d", &SC);

    if (SC >= 1000 && SC <= 9999){   
        printf("senha cadastrada: %d\n", SC); 
    } 

    do
    {
        scanf("%d", &SI);

        if(SI == SC){
            printf("senha valida!\n"); break;
        } else{
            printf("senha invalida!\n");
        }
    } while (1);
    
    return 0;
}