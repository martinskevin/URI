#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	char frase[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	int n, i;

	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("%c", frase[i]);
	}

	printf("\n");


}