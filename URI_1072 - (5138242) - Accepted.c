#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, X, Cont, In=0, Out=0;
	scanf("%d", &N);
	for(Cont=0; Cont<N; Cont++){
		scanf("%d", &X);
		if(X>=10 && X<=20)
			In++;
		else
			Out++;
	}
	printf("%d in\n", In);
	printf("%d out\n", Out);
	return 0;
}