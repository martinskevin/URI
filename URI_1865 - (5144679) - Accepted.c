#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int Teste, Joules;
	char Nome[20];
	
	scanf("%d", &Teste);
	while(Teste>0){
		scanf("%s", Nome);
		scanf("%d", &Joules);
		if(strcmp(Nome, "Thor")==0)
			printf("Y\n");
		else
			printf("N\n");
		Teste--;
	}
	
	return 0;
}