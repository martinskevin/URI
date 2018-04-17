#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int M, N;
    int maior, menor;
    int soma;

    while(1){
        soma = 0;
        scanf("%d %d", &M, &N);

        if(M<=0 || N<=0){break;}

        if(M < N){maior = N; menor = M;}
        else{maior = M; menor = N;}

        while(menor <= maior){
            printf("%d ", menor);
            soma+=menor;
            menor++;
        }
        printf("Sum=%d\n", soma);
    }
    return 0;
}
