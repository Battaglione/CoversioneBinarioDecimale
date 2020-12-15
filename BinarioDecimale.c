#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 4

int main (){
    int bin, i, dec, esp, bas, pot;
    dec = 0;
    bas = 2;
    esp = MAX - 1;
    for(i = 0; i < MAX; i++){
        do{
            printf("Inserire una cifra binaria\n");
            scanf("%d",&bin);

        }while(bin < 0 || bin > 1);
        pot = pow(bas,esp);
        esp = esp - 1;
        dec = dec + (pot * bin);
    }


    printf("%d\n", dec);
    system("pause");
    return 0;
}