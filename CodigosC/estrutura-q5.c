#include <stdio.h>

#include <string.h>



struct Questao{

    int m[2][2];

    int sDP;

    int sDS;

};



int main()

{

    struct Questao q[3];

    int i, j, k, sDif = 0;

    

    for(k = 0; k < 3; k++){

        for(i = 0; i < 2; i++){

            for(j = 0; j < 2; j++){

                printf("Digite M[%d][%d]: ", i, j);

                scanf("%d", &q[k].m[i][j]);

            }

        }

        

        q[k].sDP = q[k].m[0][0] + q[k].m[1][1];

        q[k].sDS = q[k].m[0][1] + q[k].m[1][0];

        

        printf("\nPrincipal: %d", q[k].sDP);

        printf("\nSecundaria: %d", q[k].sDS);

        sDif = sDif + q[k].sDP - q[k].sDS;

        printf("\nDiferenca: %d\n\n", q[k].sDP - q[k].sDS);

        

    }

    

    printf("\nDiferenca Total: %d", sDif);

}

