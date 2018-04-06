#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int H, M, O, T;
	scanf("%d", &T);
	while(T>0){
		scanf("%d %d %d", &H, &M, &O);
		if(H<10)
			printf("0%d:", H);
		else
			printf("%d:", H);
		if(M<10)
			printf("0%d", M);
		else
			printf("%d", M);
		if(O == 1)
			printf(" - A porta abriu!\n", H, M);
		else if(O == 0)
			printf(" - A porta fechou!\n", H, M);
			
		T--;
	}
	
	return 0;
}