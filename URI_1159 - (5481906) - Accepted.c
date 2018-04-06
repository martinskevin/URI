#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int X, i, Total=0;
	
	while(1){
		scanf("%d", &X);
		if(X == 0)
			break;
		else{
			for(i=0; i<5; i++){
				if((X%2)!=0)
					X++;
				Total += X;
				X+=2;
			}
		}
		printf("%d\n", Total);
		Total = 0;
	}
	
	return 0;
}