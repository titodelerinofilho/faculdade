#include <stdio.h>

/*

calculo da folha de pagamento | s = b + g*n/2

s = salario final
b = valor do salario base
g = valor da gratificação
n = fator de referência

 */


int main() {

    int checkCharB, checkCharG, checkCharN;
    float s, b, g, n;
    char vN, vB, vG;

    printf("------CALCULO DA FOLHA DE PAGAMENTO ------\n");
    printf("Informe os valores, seguindo a sequência abaixo.\n");
    printf("[valor] [letra]\n");
    printf("Salario Base: b ou B\n");
    printf("Gratificação: g ou G\n");
    printf("Fator de Referência: n ou N\n\n");

    checkCharB = 0;
    checkCharG = 0;
    checkCharN = 0;

    while (checkCharB == 0) {
        printf("Digite o valor e o caractere do salario base: ");
        scanf("%f %c", &b, &vB);
        checkCharB = 1;

        if ((vB != 'b') && (vB != 'B')) {
            checkCharB = 0;
            printf("Erro de caractere do salario base.\n\n");
        }
    }
    while (checkCharG == 0) {

        printf("Digite o valor e o caractere da gratificação: ");
        scanf("%f %c", &g, &vG);
        checkCharG = 1;
        if ((vG != 'g') && (vG != 'G')) {
            checkCharG = 0;
            printf("Erro de caractere da gratificação.\n\n");
        }
    }
    while (checkCharN == 0) {
        printf("Digite o valor e o caractere da referência: ");
        scanf("%f %c", &n, &vN);
        checkCharN = 1;
        if ((vN != 'n') && (vN != 'N')) {
            checkCharN = 0;
            printf("Erro de caractere do valor de referência.\n\n");
        }
    }
    // CALCULO DO SALÁRIO

    s = b + g*n/2;

    printf("Valor do Salario: %f", s);

return 0;
}
