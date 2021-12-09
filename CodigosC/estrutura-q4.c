
#include <stdio.h>

#include <stdlib.h>

#include <string.h>



struct Atleta{

    char nome[50];

    float notas[5];

    float notaFinal;

};



int main()

{

    struct Atleta a[5], aux;

    int i, j;

    float soma, min, max;

    

    system("clear");

    

    for(i = 0; i < 5; i++){

        __fpurge(stdin);

        printf("Digite o nome do Atleta: ");

        gets(a[i].nome);



        for(j = 0; j < 5; j++){

            printf("Digite a %da. nota: ", j+1);

            scanf("%f", &a[i].notas[j]);

        }



        soma = 0;

        min = max = a[i].notas[0];

        

        for(j = 0; j < 5; j++){

            soma = soma + a[i].notas[j];

            if(a[i].notas[j] > max){

                max = a[i].notas[j];

            }

            if(a[i].notas[j] < min){

                min = a[i].notas[j];

            }

        }

        a[i].notaFinal = (soma - min - max)/3;

    }

    

    for(i = 0; i < 4; i++){

        for(j = i+1; j < 5; j++){

            if(a[j].notaFinal > a[i].notaFinal){

                aux  = a[i];

                a[i] = a[j];

                a[j] = aux;

            }

        }

    }

    

    for(i = 0; i < 3; i++){

        printf("\nPosicao: %do.", i+1);

        printf("\nNome: %s", a[i].nome);

        printf("\nNota Final: %.2f\n", a[i].notaFinal);

    }

}