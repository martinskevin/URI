#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct { int num, den; } fracao;

int mdc(int, int);
fracao Simplifica(fracao);

int main(){
	fracao v1, v2, result;

	scanf("%d %d %d %d", &v1.num, &v1.den, &v2.num, &v2.den);
	
	result.num = v1.num * v2.den + v2.num * v1.den;
	result.den = v1.den * v2.den;

	result = Simplifica(result);

	printf("%d %d\n", result.num, result.den);
}

fracao Simplifica(fracao p){

	fracao result;
	int vm = mdc(p.num, p.den);
	result.num = p.num / vm;
	result.den = p.den / vm;
	return result;
}

int mdc(int m, int n)
{	if (m < 0) m = -m;
	if (n < 0) n = -n;

	if (m % n == 0)
		return n;
	else
		return mdc(n, m % n);
}