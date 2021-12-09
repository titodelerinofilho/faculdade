
#include <stdio.h>



int comb(int n, int k){

    if(k == 1){

        return n;

    }

    if(k == n){

        return 1;

    }

    if(k > 1 && k < n){

        return comb(n-1, k-1) + comb(n-1, k);

    }

}



int main()

{

    int n, k;

    

    printf("Digite dois numeros: ");

    scanf("%d %d", &n, &k);

    

    printf("\nResultado = %d", comb(n,k));



}

