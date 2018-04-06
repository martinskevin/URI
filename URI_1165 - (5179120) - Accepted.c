#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, X, Y, D=1, C=0;
	
	scanf("%d", &N);
	while(N>0){
		scanf("%d", &X);
		Y = X;
		while(Y>0){
			if((X % D)==0)
				C++;
			Y--;
			D++;
		}
		if(C==2)
			printf("%d eh primo\n", X);
		else
			printf("%d nao eh primo\n", X);
		N--;
		C = 0;
		D = 1;
	}
	
	return 0;
}