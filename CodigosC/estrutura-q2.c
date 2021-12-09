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

    struct Aluno a;

    

    system("clear");

    

    printf("Digite o nome do Aluno: ");

    gets(a.nome);



    printf("Digite a nota da AV1: ");

    scanf("%f", &a.av1);

    

    printf("Digite a nota da AV2: ");

    scanf("%f", &a.av2);

    

    a.media = (a.av1 + a.av2)/2;

    

    if(a.media >= 7){

        strcpy(a.sit, "Aprovado");

    }else{

        if(a.media >= 4 && a.media < 7){

            strcpy(a.sit, "Aguardando Final");

        }else{

            strcpy(a.sit, "Reprovado");

        }

    }

    

    printf("\nAluno: %s", a.nome);

    printf("\nMedia: %.2f", a.media);

    printf("\nSituacao: %s", a.sit);

}