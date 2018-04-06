#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(){
    int t;

    while(scanf("%d", &t) && t){
        int n[t], i;
        for(i=0; i<t; i++){
            scanf("%d", &n[i]);
        }
        for(i=0; i<t; i++){
            if(n[i] % 2 == 0){
                printf("%d\n", n[i] * 2 - 2);
            }
            else{
                printf("%d\n", n[i] * 2 - 1);
            }
        }
    }


    return 0;
}
