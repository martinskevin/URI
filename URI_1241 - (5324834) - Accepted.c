#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, X, i, j=0;
	char String1[1010], String2[1010];
	
	scanf("%d", &N);
	while(N>0){
		scanf("%s", String1);
		scanf("%s", String2);
		X = strlen(String1) - strlen(String2);
		
		if(X < 0)
			printf("nao encaixa\n");
		else{
			for(i=0; i<strlen(String2); i++, X++){
				if(String1[X] != String2[i]){
					printf("nao encaixa\n");
					break;
				}
				else
					j++;
				if(j == strlen(String2))
					printf("encaixa\n");
			}
			j = 0;
			
		}
		
		N--;
	}
	
	return 0;
}