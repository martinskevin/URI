#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int i;
	char bin[105];
	int lalala=0;
	scanf("%s", bin);
	
	for(i=0; i<strlen(bin); i++){
		if(bin[i] == '1')
			lalala++;
	}
	if((lalala % 2)==0)
		printf("%s0\n", bin);
	else
		printf("%s1\n", bin);
	
	
}