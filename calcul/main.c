#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float N1,N2,P;
    char operateur;
    printf ("entrer la valeur de N1:");
    scanf("%f",&N1);
    printf ("entrer operateur:");
    scanf(" %c",&operateur);
    printf ("entrer la valeur de N2:");
    scanf("%f",&N2);

    switch(operateur)
    {
      case '+' : printf("N1+N2=%f",N1+N2);
          break;
      case '-' : printf("N1-N2=%f",N1-N2);
          break;
      case '*' : printf("N1*N2=%f",N1*N2);
          break;
      case '^' :
           P= pow(N1,N2);
           printf("N1^N2=%.2f",P);
          break;
      case '/' : if(N2 !=0)
          printf("N1/N2=%.2f",N1/N2);
          else
          printf("l'operation est impossible");
          break;
    }

    return 0;
}
