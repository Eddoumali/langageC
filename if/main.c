#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N,F, P;
    printf ("le nombre des pages:");
    scanf ("%f", &N);
    if (N<=10){
        P= 0.30;
        F= N*P;
         }
    else if (N>20){
       P= 0.20;
       F=N*P;
    }
    else {
        P= 0.25;
        F=  N*P;
    }

         printf ("votre facture est: %f ", F);

    return 0;
}
