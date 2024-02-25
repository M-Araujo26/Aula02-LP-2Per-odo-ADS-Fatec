#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Digite dois valores: \n");
    scanf("%d%d", &a, &b);
    int x = a>b;
    printf("X: %d\n", x);
    int r = 0;
    if(b)
    {
        r = a/b;
    }
    else
    {
        printf("Impossível dividir por zero\n");
        exit(1);
    }
    printf("Resultado: %d", r);
    return 0;
}
