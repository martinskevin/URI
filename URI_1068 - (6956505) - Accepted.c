#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 1050

char pilha[MAX];
int t;

void criapilha (void);
void empilha (char);
char desempilha (void);
int pilhavazia (void);
int Balanceamento (char s[]);

int main()
{
	char string[MAX];
	int j;
	
  while(scanf("%s", string) != EOF){
	
	j = Balanceamento(string);

	if(j == 1)
		printf("correct\n");
	else
		printf("incorrect\n");
  }
}

void criapilha (void)
{
   t = 0;
}

void empilha (char y)
{
   pilha[t++] = y;
}

char desempilha (void)
{
   return pilha[--t];
} 

int pilhavazia (void)
{
   return t <= 0;
}

int Balanceamento (char s[])
{
   int i;
   criapilha ();

   for (i = 0; s[i] != '\0'; ++i) {
      char c;
      switch (s[i]) {
         case ')': if (pilhavazia ()) return 0;
                   c = desempilha ();
                   if (c != '(') return 0;
                   break;
         case ']': if (pilhavazia ()) return 0;
                   c = desempilha ();
                   if (c != '[') return 0;
                   break;
         case '}': if (pilhavazia ()) return 0;
                   c = desempilha ();
                   if (c != '{') return 0;
                   break;
         case '(': empilha (s[i]);
                   break;
         case '[': empilha (s[i]);
                   break;
         case '{': empilha (s[i]);
                   break;
      }
   }
   return pilhavazia ();
}