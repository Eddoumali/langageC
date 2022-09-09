#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B;
    printf("veuillez entrer la valeur de A:");
    scanf("%d",&A);
    printf("veuillez entrer la valeur de B:");
    scanf("%d",&B);
    if (A*B>0)
          printf("A et B ont le meme signe");
    else
         printf("A et B ont deux signes differents");
    return 0;
}
