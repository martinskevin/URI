#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int tempo, min;
    scanf("%d", &tempo);

    scanf("%d", &min);
    tempo -= min;
    scanf("%d", &min);
    tempo -= min;

    tempo < 0 ? printf("Deixa para amanha!\n") : printf("Farei hoje!\n");

    return 0;
}
