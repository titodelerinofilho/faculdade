
/*Faça uma função que receba três lados e verifique se eles formam um triângulo. A função deve

retornar 3, caso forme um triângulo equilátero (3 lados iguais), 2, caso forme um triângulo

isósceles (2 lados iguais), 1, caso forme um triângulo escaleno (3 lados distintos) e 0, caso não

forme um triângulo. Faça um programa que receba 3 números inteiros, positivos e não nulos e

através da função implementada imprima na tela um texto com o tipo de triângulo que ele

formará. Obs.: Para que se possa construir um triângulo é necessário que a medida de qualquer

um dos lados seja menor que a soma das medidas dos outros dois e maior que o valor absoluto

da diferença entre essas medidas.*/





#include <stdio.h>



int codTipoLado(int l1, int l2, int l3) {

     if (l1 + l2 >= l3 && l1 + l3 >= l2 && l2 + l3 >= l1) {

          if (l1 == l2 && l2 == l3 && l3 == l1) {

             return 3;

          }

          else if (l1 == l2 || l2 == l3 || l3 == l1 ){

             return 2;

          }

          else if (l1 != l2 && l2 != l3 && l3 != l1) {

             return 1;

          } else {

              return 0;

          }

    } 

}



void tipoTriangulo(int tipo) {

     if (tipo == 3) {

         printf ("Triangulo Equilatero");

     } else if (tipo == 2) {

         printf ("Triangulo Isosceles");

     } else if (tipo == 1) {

         printf ("Triangulo Escaleno");

     } else if (tipo == 0) {

        printf("Valores invalidos para formar um triangulo\n");

        printf("Por favor, tente novamente.");

     

    }

}



int main()

{

    int l1, l2, l3;

    int tipo;

    

    printf("Informe o primeiro lado do triângulo: ");

    scanf("%d", &l1);

    

     printf("Informe o segundo lado do triângulo: ");

    scanf("%d", &l2);

    

     printf("Informe o terceiro lado do triângulo: ");

    scanf("%d", &l3);

    

    printf("lado 1: %d\nlado 2: %d\nlado 3: %d\n", l1, l2, l3);

    

    tipo = codTipoLado(l1, l2, l3);

    

    tipoTriangulo(tipo);

    

    

    return 0;

}