#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int C;

int fibonacci(short X){
	C++;
	if(X == 0)
		return 0;
	else if(X == 1)
		return 1;
	else
		return fibonacci(X-1) + fibonacci(X-2);
}


int main()
{
	short N, X;
	scanf("%hd", &N);
	
	while(N>0){
		scanf("%hd", &X);
		C = 0;
		printf("fib(%hd) = %d calls = %d\n", X, C-1, fibonacci(X));
		N--;
	}
	
	return 0;
}