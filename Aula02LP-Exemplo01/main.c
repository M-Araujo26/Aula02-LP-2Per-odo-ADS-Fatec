#include <stdio.h>

int main()
{
    int x;
    printf("Valor de x: %d\n", x);
    printf("Entre com um Valor: \n");
    scanf("%d", &x);
    printf("Valor de x: %d\n", x);
    printf("Endereço de X: %d \n", &x);
    return 0;
}
