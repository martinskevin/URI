#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h> 
#include <stddef.h>

int posicao = 0;

int string(const char *, char);
void posfixa(char *, char *, int, int);

int main(){

	char pre[30], in[30];
	ptrdiff_t a, b, c;
	char *g;
	ptrdiff_t index;
			
	while(scanf("%s %s", pre, in) != EOF){
		g = strchr(in,pre[0]);
		index = g - in;
		a = index - 1;
		g = strchr(in,pre[0]);
		b = (g - in) + 1;
		c = strlen(in) -1;	
		posfixa(pre,in,0,a);
		posfixa(pre,in,b,c);
		printf("%c\n", pre[0]);
		posicao = 0;	
	}	
	return 0;
}

int string(const char *s, char c){
	int posicao = 0;
	while (*s != c && *s != '\0'){
		posicao++; *s++;
	}

	if(*s == '\0')
		return -1;
	else
		return posicao;
}
void posfixa(char *pre, char *in, int zero, int son) {
    if (zero <= son){
        int pos = string(in, pre[++posicao]);
        posfixa(pre, in, zero, pos-1);
        posfixa(pre, in, pos+1, son);
        printf("%c", in[pos]);
    }
}


