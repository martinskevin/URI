#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	short int n, i;
    double num[52] = {0, 1};

	scanf("%hd", &n);

	for(i = 0; i < n; i++){
        num[i+2] = num[i] + num[i+1];
	}

	printf("%.1lf\n", num[i]);

	return 0;
}