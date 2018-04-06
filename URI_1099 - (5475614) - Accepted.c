#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, X, Y, Total=0;
	scanf("%d", &N);
	while(N>0){
		scanf("%d %d", &X, &Y);
	
		if(X==Y){
			Total = 0;
		}
		else if(X>Y){
			while(Y<X){
				Y++;
				if(Y==X)
					break;
				if((Y%2) != 0)
					Total += Y;
			}
		}
		else
			while(X<Y){
				X++;
				if(Y==X)
					break;
				if((X%2) != 0)
					Total += X;
			}
		printf("%d\n", Total);
		Total =0;
		N--;
	}
	return 0;
}