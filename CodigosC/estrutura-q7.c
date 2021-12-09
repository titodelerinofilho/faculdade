#include <time.h>

#include <stdio.h>

#include <stdlib.h>



struct Questao{

    int qtd;

    int v[10];

};



int main()

{

    struct Questao q;

    int i, j, num, achou;



    srand(time(0));

    

    q.qtd = 0;

    for(i = 0; i < 10; i++){

        num = (rand()%(10 - 1 + 1)) + 1;

        q.qtd++;

        

        achou = 0;

        for(j = 0; j < i; j++){

            if(q.v[j] == num){

                achou = 1;

                break;

            }

        }

        if(achou == 0){

            q.v[i] = num;

        }else{

            i--;

        }

    }

    

    printf("Vetor: ");

    for(i = 0; i < 10; i++){

        printf("%d  ", q.v[i]);

    }

    printf("\nQtd de aleatorios gerados: %d", q.qtd);

}