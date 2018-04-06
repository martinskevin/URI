#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

typedef struct {char nome[50], cor[15], tamanho;} Aluno;

int Compara(const void *p1, const void *p2){
	Aluno *i = (Aluno *)p1, *j = (Aluno *)p2;
	if(strcmp(i->cor, j->cor) == 0)
		if(i->tamanho > j->tamanho)
			return -1;
		else if (i->tamanho < j->tamanho)
			return 1;
		else
			return strcmp(i->nome, j->nome);
   	else 
	   return strcmp(i->cor, j->cor);
}

int main(){
	int N, i;
	
	scanf("%d\n", &N);	
	
	while(N){
		Aluno aluno[N];
		
		for(i = 0; i < N; i++){
			scanf("%[^\r\n]", aluno[i].nome);
			scanf("%s %c", aluno[i].cor, &aluno[i].tamanho);
			while(getchar()!='\n');
		}
		
		qsort(aluno, N, sizeof(Aluno), Compara);
		
		for(i = 0; i < N; i++){
			printf("%s %c %s\n", aluno[i].cor, aluno[i].tamanho, aluno[i].nome);
		}
		
        scanf("%d\n", &N);

        if(N == 0)
        	break;

        printf("\n");		
	}
	return 0;
}