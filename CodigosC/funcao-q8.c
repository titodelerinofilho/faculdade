/*Faça uma função que receba um número Não e informe o seu maior divisor (d), tal que d seja

diferente de n. Faça um programa que receba um número do usuário e usando a função

implementada imprima na tela o seu maior divisor diferente de n.*/

#include <stdio.h>



int maiorDivisor(int numero) {

    

    int divi = 0;

    for (int i = 0; i <= numero; i++) {

        if (numero % i == 0) {

            divi++;

        }

    }

    

    return divi;

}







int main()

{

    int divisor;

    int num;

    printf("informe um número: ");

    scanf("%d", &num);

    

    divisor = maiorDivisor(num);

    

    printf("%d", divisor);



    return 0;

}