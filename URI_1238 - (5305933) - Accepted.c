#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, Cont, X, Y;
	char String1[60], String2[60];
	
	scanf("%d", &N);
	while(N>0){
		X = 0;
		Y = 0;
		scanf("%s %s", String1, String2);
		for(Cont=0; Cont<50; Cont++){
			if(String1[Cont] == '\0')
				X = 1;
			if(String2[Cont] == '\0')
				Y = 1;
			if(X == 1 && Y == 1)
				break;
			if(X == 0)
				printf("%c", String1[Cont]);
			if(Y == 0)
				printf("%c", String2[Cont]);
			}
		printf("\n");	
		N--;	
		}	
	
	return 0;
}