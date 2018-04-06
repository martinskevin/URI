#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, L, A=0, B=0, C=0, D=0;
	scanf("%d", &N);
	while(N>0){
		scanf("%d", &L);
		if((L%2)==0)
			A++;
		if((L%3)==0)
			B++;
		if((L%4)==0)
			C++;
		if((L%5)==0)
			D++;
		N--;
	}
	printf("%d Multiplo(s) de 2\n", A);
	printf("%d Multiplo(s) de 3\n", B);
	printf("%d Multiplo(s) de 4\n", C);
	printf("%d Multiplo(s) de 5\n", D);
	return 0;
}