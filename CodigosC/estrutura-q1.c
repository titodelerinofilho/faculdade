#include <stdio.h>

#include <stdlib.h>



struct Cadeia{

    char cad[50];

    int qMai;

    int qMin;

    int qNao;

};



int main()

{

    struct Cadeia c;

    int i;

    

    system("clear");

    

    printf("Digite uma cadeia: ");

    gets(c.cad);
    
    c.qMin = c.qMai = c.qNao = 0;

    

    for(i = 0; c.cad[i] != '\0'; i++){

        if(c.cad[i] >= 'A' && c.cad[i] <= 'Z'){

            c.qMai++;

        }else{

            if(c.cad[i] >= 'a' && c.cad[i] <= 'z'){

                c.qMin++;

            }else{

                c.qNao++;

            }

        }

    }



    printf("\nCadeia recebida: %s", c.cad);

    printf("\nQtd. Maiusculas: %d", c.qMai);

    printf("\nQtd. Minusculas: %d", c.qMin);

    printf("\nQtd. Nao Letras: %d", c.qNao);

}

