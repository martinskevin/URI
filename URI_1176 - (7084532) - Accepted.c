#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	short int n, i, m;
    unsigned long long int num[65] = {0, 1};
    
    scanf("%hd", &m);

    while(m > 0){
		scanf("%hd", &n);

		for(i = 0; i < n; i++){
    	    num[i+2] = num[i] + num[i+1];
		}

		printf("Fib(%hd) = %llu\n", n, num[i]);
		m--;
	}	
	return 0;
}	