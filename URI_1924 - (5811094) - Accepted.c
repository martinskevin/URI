#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int i;
	char curso[50];
	
	scanf("%d", &i);
	while(i > 0){
		scanf("%s", curso);
		i--;
	}
	printf("Ciencia da Computacao\n");
	
	return 0;
}