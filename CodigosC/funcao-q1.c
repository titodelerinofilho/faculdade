
/*Faça um programa que receba 2 números reais do usuário e

uma operação (caractere) que ele deseja realizar. O programa

deve realizar a operação selecionada pelo usuário e

apresentar o resultado na tela. Cada operação deve ser

implementada dentro de uma função (use o comando switch

para chamar as funções de acordo com a operação selecionada).*/



#include <stdio.h>

int menu() {



    printf("============================\n");

    printf("=============Menu===========\n");

    printf("============================\n");

    printf("Digite 1 - para somar\n");

    printf("Digite 2 - para subtrair\n");

    printf("Digite 3 - para multiplicar\n");

    printf("Digite 4 - para dividir\n");

  

}



void somar(int n1, int n2) {

    int soma = n1 + n2;

    printf("A soma é: %d", soma);

}



void subtrair(int n1, int n2) {

    int sub = n1 - n2;

    printf("A subtração é: %d", sub);

}



void multiplicar(int n1, int n2) {

    int mult = n1 * n2;

    printf("A multiplacação é: %d", mult);

}



void dividir(int n1, int n2) {

    int divi = n1 / n2;

    printf("A divisão é: %d", divi);

}







int main()



{

    float n1, n2;

    int opcao;

    

    printf("Mini-Calculadora\n");

    printf("Informe o primeiro número: ");

    scanf("%f", &n1);

    printf("Informe o segundo número: ");

    scanf("%f", &n2);

    menu();

    printf("Escolha uma opção: \n");

    scanf("%d", &opcao);

    

    switch (opcao) {

             case 1:

             somar(n1, n2);

             break;

             case 2:

             subtrair(n1, n2);

             break;

             case 3:

             multiplicar(n1, n2);

             break;

             case 4:

             dividir(n1, n2);

             break;

             default:

             printf ("Operacao invalida, tente novamente!");

    }



    return 0;

}