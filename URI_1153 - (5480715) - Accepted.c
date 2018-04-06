#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, T = 1;
	int i;
	
	scanf("%d", &N);
	if(N==0)
		T = 1;
	else{
		for(i=N; i>0; i--){
			T *= i;
		}
	}
	printf("%d\n", T);
	
	return 0;
}