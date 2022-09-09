#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main()
{   char lettre;
    printf("veuillez entrer une lettre:");
    scanf("%c",&lettre);

    if (lettre>='A' && lettre<='Z'){

           lettre+=32;

      printf("le miniscule est:%c",lettre);}



     else if (lettre>='a' && lettre<='z'){

           lettre-=32;

           printf("le majuscule est:%c",lettre);}



    return 0;
}
