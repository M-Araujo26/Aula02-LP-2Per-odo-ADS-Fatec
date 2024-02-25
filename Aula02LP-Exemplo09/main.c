#include <stdio.h>

int main()
{
    char produtividade;
    double salario;
    double salarioAjustado;
    printf("Digite o salario atual: \n");
    scanf("%lf", &salario);
    fflush(stdin);
    printf("Digite S ou N para a produtividade: \n");
    produtividade = getchar();
    salarioAjustado =  produtividade == 'S' ? salario* 1.1 : salario*1.05;
    printf("Salario novo: \n R$ %.2lf\n", salarioAjustado);
    return 0;
}
