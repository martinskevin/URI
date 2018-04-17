#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario;

    scanf("%f", &salario);

    if(salario < 2000){
        printf("Isento\n");
    }
    else if(salario < 3000) {
        printf("R$ %.2f\n", (salario-2000)*0.08);
    }
    else if(salario < 4500){
        printf("R$ %.2f\n", (salario-3000)*0.18 + 80);
    }
    else printf("R$ %.2f\n", (salario-4500)*0.28 + 350);

    return 0;
}
