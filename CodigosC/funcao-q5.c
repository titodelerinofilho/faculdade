/*Faça uma função que receba uma cadeia de caracteres e um caractere e retorne a quantidade

de vezes que esse caractere aparece na cadeia de caracteres. Faça um programa para utilizar

essa função. */



#include <stdio.h>

#include <string.h>



void contaLetra(char vetor[], char letra) {

    int somaLetra = 0;

    for (int i = 0; vetor[i] != '\0'; i++ ) {

        

        if (vetor[i] == letra) {

            somaLetra++;

        }

        

    }

    

    printf("A letra %c aparece %d vezes.", letra, somaLetra);

}



int main()

{

    char vetor[100], letra;

    printf("Digite vários caracteres aleatoriamente: ");

    fgets(vetor, 100, stdin);

    printf("Digite apenas uma letra: ");

    scanf("%c", &letra);

    

    contaLetra(vetor, letra);

    

    



    return 0;

}