#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int mdc(int, int);

int main(){
	int i;
	int m, n, result;

	scanf("%d", &i);
	
	while(i > 0){
		scanf("%d %d", &m, &n);
		result = mdc(m, n);
		printf("%d\n", result);

		i--;
	}
	
}

int mdc(int m, int n)
{	if (m < 0) m = -m;
	if (n < 0) n = -n;

	if (m % n == 0)
		return n;
	else
		return mdc(n, m % n);
}
