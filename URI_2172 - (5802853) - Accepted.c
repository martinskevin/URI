#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	long int exp, monster;
	
	while(1){
		scanf("%ld %ld", &exp, &monster);
		if(exp == 0 && monster == 0){
			break;
		}
		else{
			printf("%ld\n", exp * monster);
		}
	}
	
	return 0;
}