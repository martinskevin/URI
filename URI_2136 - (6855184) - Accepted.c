#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TAM_MAX 50

typedef struct{
	char nome[TAM_MAX]; 
	char resposta[5];
} Usuarios;

int compara(const void *, const void *);

int compara(const void *p1, const void *p2){
	Usuarios *i = (Usuarios *) p1, *j = (Usuarios *) p2;
    
    if(strcmp(j->resposta, i->resposta) == 0)
        return strcmp(i->nome, j->nome);
    else 
    	return strcmp(j->resposta, i->resposta);
}

int main(){
	
    Usuarios usuario[10005];
    char meuamigoplanc[TAM_MAX];
    int i, j, escolhido;

    for(i = 0; scanf("%s %s", usuario[i].nome, usuario[i].resposta) &&
    	strcmp(usuario[i].nome, "FIM") != 0; i++)
	
    for(j  = escolhido = 0; j < i; j++){
        if(!strcmp(usuario[escolhido].resposta, "YES")){	
    	     if(!strcmp(usuario[j+1].resposta, "YES") && strlen(usuario[escolhido].nome) < strlen(usuario[j+1].nome))
    		escolhido = j+1;
    	}else{ 
    	    escolhido++;
    	    j++;
    	}
    }
    strcpy(meuamigoplanc, usuario[escolhido].nome);

    qsort(usuario, i, sizeof(Usuarios), compara);
    
    printf("%s\n",usuario[0].nome);

    for(j = 1; j < i; j++)
    	if(strcmp(usuario[j].nome, usuario[j-1].nome))
    	     printf("%s\n",usuario[j].nome);

    printf("\nAmigo do Habay:\n%s\n", meuamigoplanc);
	
    return 0;
}