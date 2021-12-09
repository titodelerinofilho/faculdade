#include <stdio.h>



struct Questao{

    int max;

    int min;

    int qMax;

    int qMin;

};



int main()

{

    struct Questao q;

    int i, v[10];



    for(i = 0; i < 10; i++){

        printf("Digite v[%d]: ", i);

        scanf("%d", &v[i]);

    }

    

    q.min = q.max = v[0];

    for(i = 0; i < 10; i++){

        if(v[i] > q.max){

            q.max = v[i];

        }

        if(v[i] < q.min){

            q.min = v[i];

        }

    }

    

    q.qMax = q.qMin = 0;

    for(i = 0; i < 10; i++){

        if(v[i] == q.max){

            q.qMax++;

        }

        if(v[i] == q.min){

            q.qMin++;

        }

    }

    

    printf("\nO menor valor eh %d e aparece %d vez(es)", q.min, q.qMin);

    printf("\nO maior valor eh %d e aparece %d vez(es)", q.max, q.qMax);

}

