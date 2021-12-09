
/*Faça uma função que calcule o n-éssimo número da série de Fibonaci. Faça um programa que

receba o valor de n e utilize a função implementada para imprimir na tela n-éssimo número da

série de Fibonaci. Obs.: a fórmula de recorrência para esta série é ni = ni–1 + ni–2 , para i ≥ 2 pois

n0 = n1 = 1.

*/



#include <stdio.h>

#include <stdlib.h>

 

int fibonacci(int n) {

    if(n == 1) {

        return 0;

    } else if(n == 2) {

        return 1;

    } else {

        return fibonacci(n-1) + fibonacci(n-2);

    }

}



int main()

{

    

    int n;

    

    printf("Digite a posicao: ");

    scanf("%d", &n);

     

    printf("O termo: %d", fibonacci);

     

    return 0;

}

