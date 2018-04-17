#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float calcMedia(){
    float nota, media;
    int i=0;

    while(i<2){
        scanf("%f", &nota);
        if(0.0 <= nota && nota <= 10.0){
            media += nota;
            i++;
        }
        else{printf("nota invalida\n");}

    }
    return (media / 2.0);
}

int main(){
    float nota, media;
    short int opcao, j=1;

    while(j != 2){
        if(j == 1){
            media = calcMedia();
            printf("media = %.2f\n", media);
        }

        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%hi", &j);

    }

    return 0;
}
