#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    scanf("%d", &i);

    char pergunta[25];

    while(i){
        //limpando buffer
        scanf(" ");

        //lendo string com espaços
        scanf("%[^\n]s", pergunta);

        printf("I am Toorg!\n");
        i--;
    }

    return 0;
}
