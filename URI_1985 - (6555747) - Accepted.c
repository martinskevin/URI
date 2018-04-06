#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int N, produto;
	float quantidade;
	float total=0.0;
	scanf("%d", &N);

	while(N>0){
		scanf("%d %f", &produto, &quantidade);
		if(produto == 1001)
			total += (quantidade * 1.0) * 1.5;
		if(produto == 1002)
			total += (quantidade * 1.0) * 2.5;
		if(produto == 1003)
			total += (quantidade * 1.0) * 3.5;
		if(produto == 1004)
			total += (quantidade * 1.0) * 4.5;
		if(produto == 1005)
			total += (quantidade * 1.0) * 5.5;

		N--;
	}
	printf("%.2f\n", total);

	return 0;	
}