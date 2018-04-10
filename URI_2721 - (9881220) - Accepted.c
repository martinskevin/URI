#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int balls = 0;
    int reindeer[9];
    int i;

    for(i=0; i<9; i++){
        scanf("%d", &reindeer[i]);
    }
    
    for(i=0; i<9; i++){
        balls += reindeer[i];
    }

    while(balls > 9){
        balls -= 9;
    }

    switch(balls){
        case 1 :
            printf("Dasher\n");
        break;

        case 2 :
            printf("Dancer\n");
        break;

        case 3 :
            printf("Prancer\n");
        break;

        case 4 :
            printf("Vixen\n");
        break;

        case 5 :
            printf("Comet\n");
        break;

        case 6 :
            printf("Cupid\n");
        break;

        case 7 :
            printf("Donner\n");
        break;

        case 8 :
            printf("Blitzen\n");
        break;

        case 9 :
            printf("Rudolph\n");
        break;
    }

    return 0;
}
