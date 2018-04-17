#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=0, b=1, c=2, d=3, e=4, f=5, g=6, h=7, i=8, j=9;
    int k=10, l=11, m=12, n=13, o=14, p=15;
    printf("---------------------------------------\n");
    printf("|  decimal  |  octal  |  Hexadecimal  |\n");
    printf("---------------------------------------\n");
    printf("|      %d    |    %o    |       %X       |\n", a, a, a);
    printf("|      %d    |    %o    |       %X       |\n", b, b, b);
    printf("|      %d    |    %o    |       %X       |\n", c, c, c);
    printf("|      %d    |    %o    |       %X       |\n", d, d, d);
    printf("|      %d    |    %o    |       %X       |\n", e, e, e);
    printf("|      %d    |    %o    |       %X       |\n", f, f, f);
    printf("|      %d    |    %o    |       %X       |\n", g, g, g);
    printf("|      %d    |    %o    |       %X       |\n", h, h, h);

    //dois dígitos no formato octal
    printf("|      %d    |   %o    |       %X       |\n", i, i, i);
    printf("|      %d    |   %o    |       %X       |\n", j, j, j);

    //dois dígitos decimais
    printf("|     %d    |   %o    |       %X       |\n", k, k, k);
    printf("|     %d    |   %o    |       %X       |\n", l, l, l);
    printf("|     %d    |   %o    |       %X       |\n", m, m, m);
    printf("|     %d    |   %o    |       %X       |\n", n, n, n);
    printf("|     %d    |   %o    |       %X       |\n", o, o, o);
    printf("|     %d    |   %o    |       %X       |\n", p, p, p);

    printf("---------------------------------------\n");

    return 0;
}
