#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, Cont2, Cont=0;
	double V, P = 2.0, P2 = 1.0, Media = 0.0;
	scanf("%d", &N);
	while(Cont<N){
		for(Cont2=0; Cont2<3; Cont2++){
			scanf("%lf", &V);
			Media = Media + V * P;
			P = P + P2;
			P2 = P2 + 1.0;
		}
		P = 2.0;
		P2 = 1.0;
		Media = Media / 10;
		printf("%.1lf\n", Media);
		Media = 0;
		Cont++;
	}
	
	
	return 0;
}