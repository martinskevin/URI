#include <stdio.h>
int main()
{
    int A, B=0, N;
    scanf ("%d", &N);
    for(A=2;A<=N;A=A+2)
    {
        B=A*A;
        printf("%d^2 = %d\n", A, B);
        B=0;
    }
    return 0;
}