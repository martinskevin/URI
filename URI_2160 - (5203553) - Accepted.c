#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	char Linha[1000];
	gets(Linha);
	if(strlen(Linha)>80)
		printf("NO\n");
	else
		printf("YES\n");
	
	return 0;
}