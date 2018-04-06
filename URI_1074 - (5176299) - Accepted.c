#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, X;
	scanf("%d", &N);
	while(N>0){
		scanf("%d", &X);
		if(X==0)
			printf("NULL\n");
		else{
			if((X%2)==0 && X > 0)
				printf("EVEN POSITIVE\n");
			if((X%2)!=0 && X > 0)
				printf("ODD POSITIVE\n");
			if((X%2)==0 && X<0)
				printf("EVEN NEGATIVE\n");
			if((X%2)!= 0 && X<0)
				printf("ODD NEGATIVE\n");
		}
		N--;
	}
	
	
	return 0;
}