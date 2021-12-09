
#include <stdio.h>

#include <stdlib.h>

#include <string.h>



struct Aluno{

    char nome[50];

    float media;

    float av1;

    float av2;

    char sit[20];

};



int main()

{

    struct Aluno a[5];

    int i;

    

    system("clear");

    

    for(i = 0; i < 5; i++){

        __fpurge(stdin);

        printf("Digite o nome do Aluno: ");

        gets(a[i].nome);



        printf("Digite a nota da AV1: ");

        scanf("%f", &a[i].av1);

    

        printf("Digite a nota da AV2: ");

        scanf("%f", &a[i].av2);

    

        a[i].media = (a[i].av1 + a[i].av2)/2;

    

        if(a[i].media >= 7){

            strcpy(a[i].sit, "Aprovado\n\n");

        }else{

            if(a[i].media >= 4 && a[i].media < 7){

                strcpy(a[i].sit, "Aguardando Final\n\n");

            }else{

                strcpy(a[i].sit, "Reprovado\n\n");

            }

        }

    }

    for(i = 0; i < 5; i++){

        printf("\nAluno: %s", a[i].nome);

        printf("\nMedia: %.2f", a[i].media);

        printf("\nSituacao: %s", a[i].sit);

    }

}