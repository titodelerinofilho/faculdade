
/*. Faça uma função que receba um número e informe se ele é primo ou não. Faça um programa

que receba um número inteiro e utilize a função implementada para imprimir na tela se o

número informado é primo ou não.*/



#include <stdio.h>



void numeroPrimo(int num) {

    int i;

    int divisor = 0;

    for (int i = 0; i <= num; i++) {

        if (num % i == 0) {

            divisor++;

        }

    }

    

    if (divisor == 2) {

        printf("O número %d é primo", num);

    } else {

        printf("O número %d não é primo", num);

    }

}



int main()

{

   int num;

   printf("Informe um número: ");

   scanf("%d", &num);

   

   

   numeroPrimo(num);

    



    return 0;

}

